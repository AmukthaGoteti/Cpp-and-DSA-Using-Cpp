// The C++ if Statement is the most basic decision-making statement.
// It allows you to execute a block of code only if a specified condition is true.

#include <iostream>
using namespace std;

int main() {
    int i = 10;
    // If statement
    if (i < 15) {
        cout << "10 is less than 15" << endl;
    }

    // Check if the given number is even
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n << " is an even number." << endl;
    }

    // Check if the integer is less than 10 and is even
    if (n < 10 && n % 2 == 0) {
        cout << n << " is less than 10 and is an even number." << endl;
    }
    return 0;
}