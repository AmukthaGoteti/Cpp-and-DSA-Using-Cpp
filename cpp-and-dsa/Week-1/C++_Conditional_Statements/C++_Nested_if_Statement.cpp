// C++ Program to demonstrate Nested if Statement
#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 5;
    if (a > b) {
        cout << "True" << endl;
    }

    // When a number of if blocks are nested inside another if block,
    // it is known as a nested if statement.
    int c = 20, d = 10, e = 2;
    if (c > d) {
        if (c > e) {
            cout << "c is the largest number" << endl;
        }
    }

    int f = 20, g = 10, h = 30;
    if (f == 20) {
        if (g == 10) {
            if (h == 30) {
                cout << "f, g, and h have the correct values." << endl;
            }
        }
    }

}