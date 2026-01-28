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
    // Change Fron and Back Elements
    cars.front() = "Tesla";
    cars.back() = "VW";
    cout << cars.front() << " \n";
    cout << cars.back() << " \n";
    // Create a queue of strings
    queue<string> cars1;
    // Add elements to the queue
    cars1.push("Volvo");
    cars1.push("BMW");
    cars1.push("Ford");
    cars1.push("Mazda");
    // Remove the front element (Volvo)
    cars1.pop();
    // Access the front element (Now BMW)
    cout << cars1.front() << " \n";
    cout << cars.size() << " \n"; // Size of the queue
    queue<string> cars2;
    cout << cars2.empty() << " \n"; // Check if the queue is empty (1 for true, 0 for false)
    queue<string> cars3;
    cars3.push("Volvo");
    cars3.push("BMW");
    cars3.push("Ford");
    cars3.push("Mazda");
    cout << cars3.empty() << " \n";  // Outputs 0 (not empty)
    return 0;
}