/*
    Problem:
    Given 3 numbers a, b and c. Find the greatest number among them.

    Examples:
    Input: a = 10, b = 3, c = 2
    Output: 10
    Explanation: 10 is greatest among the three 

    Input: a = -4, b = -3, c = -2
    Output: -2
    Explanation: -2 is greatest among the three
*/
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        cout << a << " is the greatest number." << endl;
    } else if (b >= a && b >= c) {
        cout << b << " is the greatest number." << endl;
    } else {
        cout << c << " is the greatest number." << endl;
    }
    return 0;
}