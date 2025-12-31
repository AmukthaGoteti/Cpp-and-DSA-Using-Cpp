#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <iomanip>

using namespace std;

// -------------------- Task Structure --------------------
struct Task {
    int id;
    string name;
    int deadline;      // in hours from now
    int duration;      // in hours
    int importance;    // 1–10
    double priority;   // computed score
};

// -------------------- Priority Calculation --------------------
double calculatePriority(const Task& t) {
    // Higher importance, tighter deadline → higher priority
    return (t.importance * 2.0) + (1.0 / t.deadline) * 10.0 - (t.duration * 0.5);
}

// -------------------- Comparator for Max Heap --------------------
struct CompareTask {
    bool operator()(const Task& a, const Task& b) {
        return a.priority < b.priority; // max heap
    }
};

// -------------------- Planner Class --------------------
class TaskPlanner {
private:
    priority_queue<Task, vector<Task>, CompareTask> pq;
    int taskCounter = 1;

public:
    void addTask(const string& name, int deadline, int duration, int importance) {
        Task t;
        t.id = taskCounter++;
        t.name = name;
        t.deadline = deadline;
        t.duration = duration;
        t.importance = importance;
        t.priority = calculatePriority(t);

        pq.push(t);
        cout << "Task added successfully.\n";
    }

    void recommendTask() {
        if (pq.empty()) {
            cout << "No tasks available.\n";
            return;
        }

        Task top = pq.top();
        cout << "\nRecommended Task:\n";
        cout << "-----------------\n";
        cout << "Task: " << top.name << "\n";
        cout << "Deadline: " << top.deadline << " hrs\n";
        cout << "Duration: " << top.duration << " hrs\n";
        cout << "Importance: " << top.importance << "\n";
        cout << "Priority Score: " << fixed << setprecision(2) << top.priority << "\n";
    }

    void generateSchedule() {
        if (pq.empty()) {
            cout << "No tasks to schedule.\n";
            return;
        }

        cout << "\nOptimized Schedule (High → Low Priority)\n";
        cout << "---------------------------------------\n";

        auto tempPQ = pq;
        int currentTime = 0;

        while (!tempPQ.empty()) {
            Task t = tempPQ.top();
            tempPQ.pop();

            cout << "Time " << currentTime << " - "
                 << currentTime + t.duration << " hrs : "
                 << t.name << "\n";

            currentTime += t.duration;
        }
    }
};

// -------------------- Main Function --------------------
int main() {
    TaskPlanner planner;
    int choice;

    do {
        cout << "\n===== Intelligent Task Planner =====\n";
        cout << "1. Add Task\n";
        cout << "2. Recommend Best Task\n";
        cout << "3. Generate Optimized Schedule\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            int deadline, duration, importance;

            cin.ignore();
            cout << "Task Name: ";
            getline(cin, name);
            cout << "Deadline (hrs from now): ";
            cin >> deadline;
            cout << "Duration (hrs): ";
            cin >> duration;
            cout << "Importance (1-10): ";
            cin >> importance;

            planner.addTask(name, deadline, duration, importance);
        }
        else if (choice == 2) {
            planner.recommendTask();
        }
        else if (choice == 3) {
            planner.generateSchedule();
        }

    } while (choice != 0);

    cout << "Exiting Planner. Stay productive.\n";
    return 0;
}