/*
    A priroity Queue adds and removes elements according to priority.
    Internally uses Heap Data struture
    By default, it uses a max heap, so the element with the **largest value gets the highest priority**.
    However, this behavior can be changed by using a **custom comparison** to define your own priority rules.
*/
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(3);
    pq.push(10);
    pq.push(20);
    pq.push(40);
    cout << "Elements removed from priority queue in order: \n";
    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // Priority queue is defined as std::priority_queue inside <queue> header file.
    // Syntax -> priority_queue<T, c, comp> pq;
    /*
        T: DataType of the priority queue
        pq: Name assigned to the priority queue.
        c: Underlying container. Uses vector as default.
        comp: It is a binary predicate function that tells priority queue how to compare two elements. It is used to set the custom priority parameter and scheme. It is optional and if not provided, maximum value gets maximum priority.
    */

    // Declaration and Intialization
    // Declaration of a priority queue means creating it using the STL choosing whether it's a max-heap or min-heap.
    // Max-Heap (default Behaviour): priority_queue<int>pq;
    // Min-Heap: priority_queue<int,vector<int>,greater<int>>pq;
    // Initialization means adding elements to it so it can manage them based on their priority.
    pq.push(10);
    pq.push(5);
    pq.push(20);

    // Basic Operations
    // Insertion Elements
    // Elements can be inserted in the priority queue using push() method. After insertion, priority queue reorganize itself in such a way that the highest priority element is always at the top.
    priority_queue<int> pq1;
    pq1.push(9);
    pq1.push(8);
    pq1.push(6);
    while(!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;
    // Accessing Elements
    // Only the top element of the priority queue can be accessed using top() method. It is the element with the highest priority in priority queue.
    priority_queue<int> pq2;
    pq2.push(9);
    pq2.push(8);
    pq2.push(6);
    // Accessing top element
    cout << pq2.top() << endl;
    // Deleting Elements
    // In priority queue, deletion can only be done from the top of the priority queue using pop()method. It means that we can only remove the element with highest priority in one move. After deletion, the priority queue rearranges itself such that the next greatest priority element becomes the top element.
    priority_queue<int> pq3;
    pq3.push(9);
    pq3.push(8);
    pq3.push(6);
    // Delete top element
    pq3.pop();
    cout << pq3.top() << endl;
    // Empty()
    // This checks whether the priority queue is empty. It returns true if the priority queue has no elements; otherwise, it returns false.
    priority_queue<int> pq4;
    if(pq4.empty()) {
        cout << "Priority queue is empty. " << endl;
    }
    pq4.push(50);
    pq4.push(30);
    if(!pq4.empty())
    {
        cout << "Priority queue is not empty. Top element: " << pq4.top() << endl;
    }
    // Size of priority queue
    // The size() function in a priority queue returns the number of elements currently in the priority queue.
    priority_queue<int> pq5;
    // Add elements to the priority queue
    pq5.push(100);
    pq5.push(50);
    // Display the size of pririty queue
    cout << "Size of priority queue: " << pq5.size() << endl;
    // Remove one element
    pq5.pop();
    // Display size again
    cout << "Size after one pop: " << pq5.size() << endl;
    // Pseudo Traversal
    // In priority queue, we can only access top element of the priority queue, so we cannot directly traverse it. However, we can create a copy of the priority queue, access and delete the top element and repeat this process until the copied priority queue is empty. In this way, we can effectively traverse all the elements of the priority queue.
    priority_queue<int> pq6;
    pq6.push(9);
    pq6.push(8);
    pq6.push(6);
    priority_queue<int> temp = pq6;
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    // Changing Priority Queue Order
    /*
        All the above operations are demonstrated on a priority queue implementing max heap. This can be changed by using a custom comparator in which you define the priority parameter and how to compare them.
        If you only want to assign highest priority to the smallest element (min-heap), then inbuilt greater<type> functional object can be used.
    */
    priority_queue<int, vector<int>, greater<int>> pq7;
    pq7.push(9);
    pq7.push(8);
    pq7.push(6);
    auto temp1 = pq7;
    while(!temp1.empty())
    {
        cout << temp1.top() << " ";
        temp1.pop();
    }
    cout << endl;
    /*
        Time Complexity
            The below table lists the time complexity of the above operations on priority queue:
                Operation	                                        Time Complexity
                Add element	                                        O(log n)
                Delete element	                                    O(log n)
                Find maximum element in max heap.	                O(1)
                Find minimum element in min heap.                   O(1)
                Initialize priority queue from another container.   O(n)
    */
    return 0;
}