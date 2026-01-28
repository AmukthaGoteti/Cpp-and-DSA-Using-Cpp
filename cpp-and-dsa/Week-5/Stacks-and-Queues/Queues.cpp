/*
    A queue stores multiple elements in a specific order, 
    called FIFO.
    FIFO stands for First In First Out.
    The element that is added first to the queue will be the
    first one to be removed from the queue.
    To use queue, you need to include the <queue> header file.
*/

#include <iostream>
#include <queue> // Include the queue header file
using namespace std;

int main() {
    // Create a queue of stings called 'cars'
    queue<string> cars;
    // Add elements to the queue using the push() function
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
    // Print Elements
    while (!cars.empty())
    {
        cout << cars.front() << " \n";
        cars.pop();
    }
    // Accessing Front and Back Elements
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
    cout << cars.front() << " \n";
    cout << cars.back() << " \n";
}