/*
    Practice Question:
        Implement a Stack using Queue data structure, this stack has no fixed capacity 
        and can grow dynamically until memory is available.
        The Stack must support the following operations:

        (i) push(x): Insert an element x at the top of the stack.
        (ii) pop(): Remove the element from the top of the stack, if stack is empty do nothing.
        (iii) top(): Return top element if not empty, else -1.
        (iv) size(): Return the number of elements currently in the stack.

        There will be a sequence of queries queries[][]. The queries are represented in numeric form:

        1 x : Call push(x)
        2: Call pop()
        3: Call top()
        4: Call size()
        You just have to implement the functions push, pop, top and size. 
        The driver code will handle the input and output.

    Examples:
        Input: q = 6, queries[][] = [[1, 5], [1, 3], [1, 4], [3], [2], [4]]
        Output: [4, 2]
        Explanation: Queries on queue are as follows:
        push(5): Insert 5 at the top of the stack.
        push(3): Insert 3 at the top of the stack.
        push(4): Insert 4 at the top of the stack.
        top(): Return the top element i.e 4.
        pop(): Remove the top element 4 from the stack.
        size(): Stack contains 2 elements return 2.

        Input: q = 4, queries[][] = [[4], [3], [1, 10], [3]]
        Output: [0, -1, 10]
        Explanation: Queries on queue are as follows:
        size(): Stack contains 0 elements return 0.
        top(): Stack is empty return -1.
        push(10): Insert 10 at the top of the stack.
        top(): Return the top element i.e 10.
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class myStack {
    queue<int> q;

public:

    void push(int x) {
        q.push(x);

        int n = q.size();
        for (int i = 0; i < n - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if (!q.empty()) {
            q.pop();
        }
    }

    int top() {
        if (!q.empty()) {
            return q.front();
        }
        return -1;
    }

    int size() {
        return q.size();
    }
};

int main() {
    int q;
    cin >> q;

    myStack st;
    vector<int> output;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            st.push(x);
        } 
        else if (type == 2) {
            int val = st.top();   // Get top
            output.push_back(val); // Store it
            st.pop();             // Remove it
        }
    }

    for (int val : output) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}