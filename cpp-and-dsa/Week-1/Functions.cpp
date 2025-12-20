// A function is a block of code which only runs when
// it is called.
// You can pass data, know as parameters, into a function.
// A functions are used to perform certain actions, and they
// are important for reusing code: define the code once, and use
// it many times.
// C++ provides some pre-defined functions, such as main().
// You can also create your own functions. These are called
// user-defined functions.
// To create a function, you need to define the function
// void myFunction() {
//   // code to be executed
// }
#include <iostream>
using namespace std;
void myFunction();
int main() {
    myFunction();
    myFunction();
    myFunction();
    return 0;
}
void myFunction() {
    cout << "I just got executed!" << endl;
}
// A C++ function consist of two parts:
// Function Declaration: Tells the compiler about a function
// name, return type, and parameters.
// Function Definition: Is the actual body of the function
// where the functionality is written.