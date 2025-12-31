#include <queue>
#include <string>
#include <vector>

using namespace std;

// ---------------- Task ----------------
struct Task {
    int id;
    string name;
    int deadline;
    int duration;
    int importance;
    double priority;
};

// ---------------- Priority ----------------
double calculatePriority(const Task& t) {
    return (t.importance * 2.0) + (10.0 / t.deadline) - (t.duration * 0.5);
}

// ---------------- Comparator ----------------
struct CompareTask {
    bool operator()(const Task& a, const Task& b) {
        return a.priority < b.priority;
    }
};

// ---------------- Planner ----------------
class TaskPlanner {
private:
    priority_queue<Task, vector<Task>, CompareTask> pq;
    int counter = 1;

public:
    void addTask(const char* name, int deadline, int duration, int importance) {
        Task t;
        t.id = counter++;
        t.name = name;
        t.deadline = deadline;
        t.duration = duration;
        t.importance = importance;
        t.priority = calculatePriority(t);
        pq.push(t);
    }

    bool empty() const {
        return pq.empty();
    }

    Task topTask() const {
        return pq.top();
    }

    priority_queue<Task, vector<Task>, CompareTask> getQueueCopy() const {
        return pq; // SAFE COPY
    }
};

// ---------------- Global Planner ----------------
static TaskPlanner planner;

// ---------------- C API ----------------
extern "C" {

__attribute__((visibility("default")))
void add_task(const char* name, int deadline, int duration, int importance) {
    planner.addTask(name, deadline, duration, importance);
}

__attribute__((visibility("default")))
int has_task() {
    return planner.empty() ? 0 : 1;
}

__attribute__((visibility("default")))
const char* recommend_task() {
    static string result;

    if (planner.empty()) {
        result = "No tasks available";
        return result.c_str();
    }

    Task t = planner.topTask();
    result =
        "Task: " + t.name +
        "\nDeadline: " + to_string(t.deadline) + " hrs" +
        "\nDuration: " + to_string(t.duration) + " hrs" +
        "\nImportance: " + to_string(t.importance) +
        "\nPriority: " + to_string(t.priority);

    return result.c_str();
}

__attribute__((visibility("default")))
const char* get_all_tasks() {
    static string result;
    result.clear();

    if (planner.empty()) {
        result = "No tasks available";
        return result.c_str();
    }

    auto tempPQ = planner.getQueueCopy();
    int i = 1;

    while (!tempPQ.empty()) {
        Task t = tempPQ.top();
        tempPQ.pop();
        result += to_string(i++) + ". " + t.name +
                  " | Priority: " + to_string(t.priority) + "\n";
    }

    return result.c_str();
}

}
