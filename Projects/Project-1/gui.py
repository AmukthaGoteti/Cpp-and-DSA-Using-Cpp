import os
import ctypes
import tkinter as tk
from tkinter import ttk

# ---------------- Setup ----------------
os.chdir(os.path.dirname(os.path.abspath(__file__)))
lib = ctypes.CDLL("./libtaskplanner.dylib")

lib.add_task.argtypes = [ctypes.c_char_p, ctypes.c_int, ctypes.c_int, ctypes.c_int]
lib.recommend_task.restype = ctypes.c_char_p
lib.get_all_tasks.restype = ctypes.c_char_p
lib.has_task.restype = ctypes.c_int

# ---------------- Window ----------------
root = tk.Tk()
root.title("ITPRS • Intelligent Task Planner")
root.geometry("960x720")
root.configure(bg="#f7f9fc")

# ---------------- Style ----------------
style = ttk.Style()
style.theme_use("clam")

style.configure("Card.TFrame", background="white", relief="solid", borderwidth=1)
style.configure("Title.TLabel", font=("Segoe UI", 20, "bold"))
style.configure("Subtitle.TLabel", font=("Segoe UI", 11))
style.configure("Section.TLabel", font=("Segoe UI", 13, "bold"))
style.configure("Field.TLabel", font=("Segoe UI", 10), background="white")
style.configure("TButton", font=("Segoe UI", 10), padding=8)

# ---------------- Header ----------------
header = ttk.Frame(root)
header.pack(fill="x", padx=24, pady=(24, 10))

ttk.Label(
    header,
    text="Intelligent Task Planning & Recommendation System",
    style="Title.TLabel"
).pack(anchor="w")

ttk.Label(
    header,
    text="Add tasks, stay focused, and let the system guide your priorities.",
    style="Subtitle.TLabel"
).pack(anchor="w", pady=4)

# ---------------- Main Layout ----------------
main = ttk.Frame(root)
main.pack(fill="both", expand=True, padx=24, pady=10)
main.columnconfigure(0, weight=1)

# ======================================================
# ADD TASK CARD
# ======================================================
add_card = ttk.Frame(main, style="Card.TFrame", padding=24)
add_card.pack(fill="x")

ttk.Label(add_card, text="Add a New Task", style="Section.TLabel").pack(anchor="w", pady=(0, 12))

def labeled_entry(parent, label):
    frame = ttk.Frame(parent)
    frame.pack(fill="x", pady=6)
    ttk.Label(frame, text=label, style="Field.TLabel").pack(anchor="w")
    entry = ttk.Entry(frame)
    entry.pack(fill="x", pady=4)
    return entry

name_entry = labeled_entry(add_card, "Task name")
deadline_entry = labeled_entry(add_card, "Deadline (hours from now)")
duration_entry = labeled_entry(add_card, "Estimated duration (hours)")
importance_entry = labeled_entry(add_card, "Importance (1–10)")

status_label = ttk.Label(add_card, text="", background="white")
status_label.pack(anchor="w", pady=(10, 0))

def add_task():
    name = name_entry.get().strip()
    if not name:
        status_label.config(text="⚠ Task name cannot be empty", foreground="#dc2626")
        return

    try:
        lib.add_task(
            name.encode(),
            int(deadline_entry.get()),
            int(duration_entry.get()),
            int(importance_entry.get())
        )

        refresh_dashboard()
        status_label.config(text="✓ Task added successfully", foreground="#059669")

        for e in [name_entry, deadline_entry, duration_entry, importance_entry]:
            e.delete(0, tk.END)

        name_entry.focus()

    except ValueError:
        status_label.config(text="⚠ Please enter valid numeric values", foreground="#dc2626")

ttk.Button(add_card, text="Add Task", command=add_task).pack(fill="x", pady=16)

# ======================================================
# TASK LIST
# ======================================================
table_card = ttk.Frame(root, style="Card.TFrame", padding=20)
table_card.pack(fill="both", expand=True, padx=24, pady=(10, 24))

ttk.Label(
    table_card,
    text="Your Tasks (sorted by priority)",
    style="Section.TLabel"
).pack(anchor="w", pady=(0, 12))

columns = ("Task", "Priority")
tree = ttk.Treeview(table_card, columns=columns, show="headings", height=8)

tree.heading("Task", text="Task")
tree.heading("Priority", text="Priority Score")
tree.column("Task", width=650, anchor="w")
tree.column("Priority", width=160, anchor="center")

tree.pack(fill="both", expand=True)

# ---------------- Refresh Logic ----------------
def refresh_dashboard():
    for row in tree.get_children():
        tree.delete(row)

    raw = lib.get_all_tasks().decode().splitlines()
    for line in raw:
        if "|" in line:
            parts = line.split("|", 1)
            task_name = parts[0].strip()
            priority = parts[1].split(":")[-1].strip()
            tree.insert("", "end", values=(task_name, priority))

# ---------------- Start ----------------
name_entry.focus()
refresh_dashboard()
root.mainloop()