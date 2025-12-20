/*
    Problem:
        You are given an Integer n. Return true if It is a Leap Year otherwise return false.
    Examples:
        Input: n = 4
        Output: true
        Explanation: 4 is not divisible by 100 and is divisible by 4 so its a leap year

        Input: n = 2021
        Output: false
        Explanation: 2021 is not divisible by 100 and is also not divisible by 4 so its not a leap year
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter year: ";
    cin >> n;
    if (n % 4 == 0) {
        if(n % 100 == 0) {
            if(n % 400 == 0) {
                cout << n << " is a Leap Year" << endl;
            }
            else {
                cout << n << " is not a Leap Year" << endl;
            }
        }
        else {
            cout << n << " is a Leap Year" << endl;
        }
    }
    else {
        cout << n << " is not a Leap Year" << endl;
    }
    return 0;
}