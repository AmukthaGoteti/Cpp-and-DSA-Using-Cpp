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
    // Empty Method
    // This checks wheather the quue is empty
    // It returns true if the queue has no elements; 
    // otherwise, it returns false
    queue<int> q2;
    if(q2.empty()) {
        cout << "Queue is empty " << endl;
    }
    q2.push(100);
    if(!q2.empty()) {
        cout << "Queue is not empty. Front element: " << q2.front() << endl;
    }
    // Size of Queue
    // The size() function in a queue returns the number of eleements in the queue.
    // It helps to determine how many items are stored without modifying the queue.
    queue<int> q3;
    q3.push(10);
    q3.push(5);
    cout << "Size of the queue: " << q3.size() << endl;
    q3.pop();
    cout << "Size of the queue: " << q3.size() << endl;
    // Pseudo Traversal
    // Since only the front and back element can be accessed in a queue, we cannot directly traverse it.
    // On the other hand, we can create a copy of the queue, access the front element, and then delete it, and continue this process until the copied queue is empty, we can effectively traverse all the elements of the queue.
    // Time complexity for traversal : O(n)
    queue<int> q4;
    q4.push(3);
    q4.push(4);
    q4.push(5);
    queue<int> temp1 = q4;
    while(!temp1.empty()) {
        cout << temp1.front() << " ";
        temp1.pop();
    }
    cout << endl;
    // All member functions
    // Following is the list of all member functions of std::queue class in C++
    /*
        Functions                       Description
        front()                         Access the front element of the queue.
        back()                          Access the end element of the queue.
        empty()                         Check whether a queue is empty or not.
        size()                          Returns the number of elements in the queue.
        push()                          Adding an element at the back of the queue.
        push_range()                    Adding multiple elements at the end of queue.
        emplace()                       Add the constructs element in top of the queue.
        pop()                           Delete the front element of the queue.
        swap()                          Swap two queues.
    */
    return 0;
}
/*
    Difference Between Stack and Queue
    | Aspect             | Stack                                | Queue                                  |
    | ------------------ | ------------------------------------ | -------------------------------------- |
    | Principle          | LIFO – Last In, First Out            | FIFO – First In, First Out             |
    | Insertion          | `push()` (at the top)                | `enqueue()` / `push()` (at the rear)   |
    | Deletion           | `pop()` (from the top)               | `dequeue()` / `pop()` (from the front) |
    | Accessible Element | Only the **top** element             | Only the **front** element             |
    | Order of Removal   | Reverse of insertion                 | Same as insertion                      |
    | Real-world Example | Stack of plates                      | Line at a ticket counter               |
    | Common Uses        | Function calls, undo/redo, recursion | Scheduling, buffering, BFS             |

    In simple words

    * Stack: You remove the last added element first.
    * Queue: You remove the first added element first.

    One-line memory trick

    > Stack = LIFO, Queue = FIFO

    This distinction is fundamental and appears frequently in interviews and problem-solving—mastering it will serve you well.
*/