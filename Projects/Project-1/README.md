# Intelligent Task Planning & Recommendation System (ITPRS)

A cross-language productivity system that combines a **high-performance C++ scheduling engine** with a **modern, user-friendly Python GUI dashboard**.
The system intelligently prioritizes tasks, recommends what to work on next, and dynamically updates task ordering using algorithms and data structures.

---

## 🚀 Project Overview

Traditional to-do lists are static and manual.
**ITPRS** is designed to *think ahead*.

It automatically:

* Prioritizes tasks based on **importance, urgency, and duration**
* Recommends the **best task to focus on next**
* Maintains an optimized task order using a **priority queue**
* Updates instantly through a **desktop GUI dashboard**

This project demonstrates **systems thinking**, **C++ performance**, and **Python UI integration**.

---

## 🧠 Core Architecture

```
Python GUI (Tkinter + ttk)
        │
        ▼
ctypes (C ABI bridge)
        │
        ▼
C++ Task Planner Engine
(priority_queue + scheduling logic)
```

* **C++** → Core logic, algorithms, performance
* **Python** → GUI, usability, rapid interaction
* **ctypes** → Seamless cross-language integration

---

## ✨ Key Features

### C++ Backend

* Priority-based task scheduling using `priority_queue`
* Custom comparator for dynamic prioritization
* Real-time task recommendation
* Safe encapsulation of internal data structures
* Exposed as a shared library (`.dylib / .so / .dll`)

### Python GUI Dashboard

* Clean, modern desktop interface
* Guided task input with validation
* Live task table (priority-sorted)
* Immediate visual feedback on task addition
* User-friendly design focused on clarity and focus

---

## 🛠️ Technologies Used

| Layer       | Technology                                    |
| ----------- | --------------------------------------------- |
| Core Engine | C++ (STL, priority_queue, custom comparators) |
| GUI         | Python (Tkinter, ttk)                         |
| Integration | ctypes                                        |
| Platform    | macOS / Linux / Windows                       |
| Build       | g++ / clang++                                 |

---

## 📁 Project Structure

```
ITPRS/
├── taskplanner.cpp        # C++ backend (shared library)
├── libtaskplanner.dylib   # Compiled library (macOS)
├── gui.py                 # Python GUI dashboard
├── README.md              # Project documentation
```

---

## ⚙️ How It Works

### Task Priority Formula

```text
priority = (importance × 2)
         + (10 / deadline)
         − (duration × 0.5)
```

* Higher importance → higher priority
* Closer deadlines → higher urgency
* Longer tasks → slightly deprioritized

The highest-priority task is always accessible in **O(1)** time.

---

## ▶️ How to Run

### 1️⃣ Compile the C++ Backend

#### macOS

```bash
g++ -std=c++17 -shared -fPIC taskplanner.cpp -o libtaskplanner.dylib
```

#### Linux

```bash
g++ -std=c++17 -shared -fPIC taskplanner.cpp -o libtaskplanner.so
```

#### Windows (MinGW)

```bash
g++ -shared taskplanner.cpp -o taskplanner.dll
```

---

### 2️⃣ Run the GUI

```bash
python3 gui.py
```

The dashboard will launch as a desktop application.

---

## 🖥️ GUI Capabilities

* Add tasks with:

  * Name
  * Deadline
  * Estimated duration
  * Importance
* See all tasks instantly in priority order
* Focus panel highlights the **recommended task**
* Inline validation and friendly feedback
* Keyboard-friendly and distraction-free UI

---

## 🎯 Why This Project Is Strong

This project demonstrates:

* ✅ Data Structures & Algorithms (priority queue, comparators)
* ✅ C++ systems programming
* ✅ Python GUI development
* ✅ Cross-language integration
* ✅ Real-world architecture
* ✅ User-centered design thinking

---

## 🧩 Possible Extensions

* Task completion / deletion
* Daily & weekly schedule timeline
* File persistence (save/load tasks)
* Dark mode
* Migration to PyQt for premium UI
* Packaging as `.app` / `.exe`

---

If you want, I can:

* Add screenshots to this README
* Optimize wording for recruiters
* Write a **GitHub project description**
* Create a **resume bullet + interview answer**

Just say the word.