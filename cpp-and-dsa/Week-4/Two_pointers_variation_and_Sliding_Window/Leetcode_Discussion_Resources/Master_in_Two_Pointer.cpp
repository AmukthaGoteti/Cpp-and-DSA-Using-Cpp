// Master in Two Pointer
/*
    Two pointer approach is an essential part of a programmer’s toolkit, especially in technical interviews. 
    The name does justice in this case, it involves using two pointers to save time and space. 
    (Here, pointers are basically array indexes).
    Just like Binary Search is an optimization on the number of trials needed to achieve the result, 
    this approach is used for the same benefit.

    There are primarily two ways of implementing the two-pointer technique:
        1. One pointer at each end
        2. Different Paces
*/
// One pointer at each end
// One pointer starts from beginning and other from the end and they proceed towards each other
/*
    Problem Statement:
        In a sorted array, find if a pair exists with a given sum S
*/
// Brute Force Approach:
/*
    A brute force approach is a straightforward, 
    trial-and-error problem-solving method that 
    systematically checks every possible solution or combination until the correct one is found
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, S;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target sum S: ";
    cin >> S;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == S) {
                cout << "True" << endl;
                return 0; // exit immediately after finding pair
            }
        }
    }
    cout << "False" << endl;
    return 0;
}