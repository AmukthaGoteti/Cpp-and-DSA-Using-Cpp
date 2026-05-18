/* 
    Problem:
        You are given a code that prints three integers a, b, and c. 
        You need to comment on the line of code that prints the integer b such that this line does not compile.
    Example :
        Input: a = 5, b = 6, c = 15
        Output: 5 15
        Explaination: Only the value of a and c is printed as the line of code that prints b is commented. 
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter 3 Number: ";
    cin >> a >> b >> c;
    cout << a << endl;
    // cout << b;
    cout << c << endl;
    return 0;
}