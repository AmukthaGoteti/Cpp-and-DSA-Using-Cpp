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
    return 0;
}