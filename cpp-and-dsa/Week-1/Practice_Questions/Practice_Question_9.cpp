/*
    Problem:
    Given an array arr of positive integers. The task is to swap every ith element of the array with (i+2)th element.

    Examples :
    Input: arr[] = [1, 2, 3]
    Output: [3, 2, 1]
    Explanation: Swapping 1 and 3, makes the array [3, 2, 1]. There is only one swap possible in this array.

    Input: arr[] = [1, 2, 3, 4, 5]
    Output: [3, 4, 5, 2, 1]
    Explanation: Swapping 1 and 3, makes the array [3, 2, 1, 4, 5]. Now, swapping 2 and 4, makes the array [3, 4, 1, 2, 5]. Again,swapping 1 and 5, makes the array [3, 4, 5, 2, 1].
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i + 2 < n; i++) {
        swap(arr[i], arr[i + 2]);
    }
    cout << "Array after swapping: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}