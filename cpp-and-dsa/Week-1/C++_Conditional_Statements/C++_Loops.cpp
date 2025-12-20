// In C++ programming, sometimes there is a need to perform some operation more than once or n number of times.
// In such cases, loops come into play, allowing users to repeatedly execute a block of statements any number of times.

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "Hello, World!" << endl;
    }
    // C++ provides three types of loops that works the same, but are preferred in different scenarios:
    // 1. for loop
    // The for loop is an entry-controlled loop, which means that it checks wheather the test condition is true 
    // before excuting the statement inside it.
    // Program to print numbers from 1 to 5 using for loop
    for (int num = 1; num <=5; num++) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}