// In C++ programming, sometimes there is a need to perform some operation more than once or n number of times.
// In such cases, loops come into play, allowing users to repeatedly execute a block of statements any number of times.

#include <iostream>
#include <vector>
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
    // 2. while loop
    // The while loop is also an entry-controlled loop which is used in situations 
    // where we do not know the exact number of iterations of the beforhand.
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    // 3. do-while loop
    // The do-while loop is an exit controlled loop, 
    // which means the condition is checked after executing the body of the loop.
    int j = 1;
    do {
        cout << j << " ";
        j++;
    }
    while(j <= 5);
    cout << endl;
    // 4. For each loop
    // The for-each loop in C++ is range-based loop. It automatically iterates over the elements of a container
    // such as arrays, vectors, or lists without the need for explicit indexing.
    vector<int> arr = {1, 2, 3, 4, 5};
    // By Value
    cout << "Iterating by value: " << endl;
    for (auto it: arr) {
        cout << it << " ";
    }
    cout << endl;
    // By Reference
    cout << "Iterating by reference: " << endl;
    for (auto &it: arr) {
        cout << it << " ";
    }
    cout << endl;
    // 5. Infinite loop
    // An infinte loop is a piece of coding that lacks a functional exit so that it repeats indefinitely.
    /*for(;;) {
        cout << "This Loop will run forever." << endl;
    }*/
    return 0;
}