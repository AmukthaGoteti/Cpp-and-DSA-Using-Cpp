/*
    Problem:
        Implement a queue data structure which follows FIFO(First In First Out) property, using only the instances of the stack data structure.
        Note:
            1. To implement means you need to complete some predefined functions, which are supported by a normal queue such that it can efficiently handle the given input queries which are defined below.
            2. The implemented queue must support the following operations of a normal queue: 
                a. enQueue(data) : This function should take one argument of type integer and place the integer to the back of the queue.

                b. deQueue(): This function should remove an integer from the front of the queue and also return that integer. If the queue is empty, it should return -1.

                c. peek(): This function returns the element present in the front of the queue. If the queue is empty, it should return -1.

                d. isEmpty(): This function should return true if the queue is empty and false otherwise.
            3. You will be given q queries of 4 types:
                a. 1 val - For this type of query, you need to insert the integer val to the back of the queue.
                b. 2 - For this type of query, you need to remove the element from the front of the queue, and also return it.
                c. 3 - For this type of query, you need to return the element present at the front of the queue(No need to remove it from the queue).
                d. 4 - For this type of query, you need to return true if the queue is empty and false otherwise.
            4. For every query of type:
                a. 1, you do not need to return anything.
                b. 2, return the integer being deQueued from the queue.
                c. 3, return the integer present in the front of the queue.
                d. 4, return “true” if the queue is empty, “false” otherwise.
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
private:
    Node* frontNode;
    Node* rearNode;

public:
    Queue() {
        frontNode = rearNode = NULL;
    }

    bool isEmpty() {
        return frontNode == NULL;
    }

    void enqueue(int val) {
        Node* newNode = new Node(val);

        if (rearNode == NULL) {
            frontNode = rearNode = newNode;
            return;
        }

        rearNode->next = newNode;
        rearNode = newNode;
    }

    int dequeue() {
        if (isEmpty()) {
            return -1;
        }

        Node* temp = frontNode;
        int value = temp->data;

        frontNode = frontNode->next;

        if (frontNode == NULL) {
            rearNode = NULL;
        }

        delete temp;
        return value;
    }

    int peek() {
        if (isEmpty()) {
            return -1;
        }
        return frontNode->data;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.peek() << endl;     // 10
    cout << q.dequeue() << endl;  // 10
    cout << q.dequeue() << endl;  // 20
    cout << q.dequeue() << endl;  // 30
    cout << q.dequeue() << endl;  // -1

    return 0;
}