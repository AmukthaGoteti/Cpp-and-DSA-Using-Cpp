/*
    Problem:
    What do you do when you need to execute certain statements more than once? 
    You put them in a loop. Loops are very powerful. The majority of coding questions need loops to work. 
    You can't even input test cases without loops!
    Here, we will use for loop and check if the given number n is prime or not.

    Note:  A number is prime if it's divisible by itself and 1 only. Also, 1 is not prime.
    Example 1:
    Input:
    n = 1
    Output:
    No

    Example 2:
    Input:
    n = 2
    Output:
    Yes

    Your Task:
    You don't need to read input or print anything. Your task is to complete the function isPrime() which takes the integer n as a parameter and returns a string "Yes" or "No".
*/

#include <iostream>
using namespace std;

string isPrime(int n) {
    if (n <= 1) return "No";
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return "No";
    }
    return "Yes";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << isPrime(n) << endl;
    return 0;
}