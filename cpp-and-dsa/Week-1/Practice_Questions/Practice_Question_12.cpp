/*
    Problem:
        While loop is another loop like for loop but unlike for loop it only checks for one condition.
        Here, we will use while loop and print a number n's table in reverse order.

    Example 1:
        Input: n = 1
        Output: 10 9 8 7 6 5 4 3 2 1
    Example 2:
        Input: n = 2
        Output: 20 18 16 14 12 10 8 6 4 2
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 10;
    while(i >= 1) {
        cout << n * i << " ";
        i--;
    }
    cout << endl;
    return 0;
}