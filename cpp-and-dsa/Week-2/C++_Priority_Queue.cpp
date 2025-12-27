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

    return 0;
}