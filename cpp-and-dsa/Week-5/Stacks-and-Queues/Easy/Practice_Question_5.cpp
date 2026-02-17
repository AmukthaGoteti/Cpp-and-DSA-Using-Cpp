/*
    Problem Statement:
        Implement a Queue using 2 stacks s1 and s2 .
        A Query q is of 2 Types
        (i) 1 x (a query of this type means  pushing 'x' into the queue)
        (ii) 2   (a query of this type means to pop element from queue and print the poped element)

        Note : If there is no element return -1 as answer while popping.

    Examples:
        Input: q=5, queries[][]=[[1, 2], [1, 3], [2], [1, 4], [2]]
        Output: [2, 3]
        Explanation: 
        In the first testcase
        [1 2] the queue will be [2]
        [1 3] the queue will be [2 3]
        [2]   poped element will be 2 the queue 
        will be [3]
        [1 4] the queue will be [3 4]
        [2 ]  poped element will be 3.

        Input: q = 4, queries[][] = [[1, 2], [2], [2], [1, 4]]
        Output: [2, -1]
        Explanation: 
        In the second testcase 
        [1, 2] the queue will be [2]
        [2]   poped element will be [2] and 
            then the queue will be empty
        [2]   the queue is empty and hence -1
        [1, 4] the queue will be [4].
*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class QueueUsingStacks {
private:
    stack<int> s1, s2;

public:
    // Push operation
    void push(int x) {
        s1.push(x);
    }

    // Pop operation
    int pop() {
        // If both stacks are empty
        if (s1.empty() && s2.empty()) {
            return -1;
        }

        // If s2 is empty, move elements from s1 to s2
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int frontElement = s2.top();
        s2.pop();
        return frontElement;
    }
};

int main() {
    int q;
    cin >> q;

    QueueUsingStacks queue;
    vector<int> output;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            queue.push(x);
        } 
        else if (type == 2) {
            output.push_back(queue.pop());
        }
    }

    // Print results
    for (int val : output) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}