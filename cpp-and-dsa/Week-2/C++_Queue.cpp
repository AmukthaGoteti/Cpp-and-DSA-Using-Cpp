/*
    A queue is a container adapter that stores elements in FIFO (First In, First Out) order.
    The elements that are inserted first should be removed first.
    This is possible by inserting elements at one end (called back) 
    and deleting them from the other end (called front) 
    of the data structure.
*/
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(5);
    cout << "Front element: " << q.front() << endl;
    cout << "Back Element: " << q.back() << endl;

    // Syntax -> queue<T> q;
    // Queue is defined as the std::queue class template inside <queue> header file.
    /*
        where,
            T: DataType of elements in the queue.
            q: Name assigned to the queue.
    */
    // Basic Operations
    // Insertion Elements
    /*
        New elements can only be inserted at back of 
        the queue using push() function.
        The process of inserting elements in a queue 
        is also called enqueue.
        Time complexity of insertion : O(1).
    */
    q.push(3);
    q.push(4);
    q.push(5);
    // Accessing Elements
    /*
        Only the front and back elements of the 
        queue can be accessed by using front() and back()
        functions respectively.
        Time complexity for accessing elements : O(1)
    */
    q.push(3);
    q.push(4);
    q.push(5);
    cout << q.front() << endl;
    cout << q.back() << endl;
    // Deleting Elements
    /*
        Elements can only be deleted from the 
        front of the queue using the pop() function.
        The process of deleting elements from a queue 
        is also called dequeue.
        Time complexity for deletion : O(1)
    */
    queue<int> q1;
    q1.push(3);
    q1.push(4);
    q1.push(5);
    cout << "Queue Before Deleting" << endl;
    queue<int> temp = q1;   // copy for safe traversal
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
    // delete one element
    q1.pop();
    cout << "Queue After Deleting" << endl;
    while (!q1.empty()) {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
    return 0;
}