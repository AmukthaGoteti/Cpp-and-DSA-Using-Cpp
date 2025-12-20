/*
    Problem:
    Given an array arr[] of positive integers. The task is to return the count of the number of odd and even elements in the array.
    Note: Return two elements where the first one in the count of odd & second one is the count of even.

    Examples:
    Input: arr[] = [1, 2, 3, 4, 5]
    Output: 3 2
    Explanation: There are 3 odd elements (1, 3, 5) and 2 even elements (2 and 4).

    Input: arr[] = [1, 1]
    Output: 2 0
    Explanation: There are 2 odd elements (1, 1) and no even elements.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> evenOddCount(int arr[], int n) {
    int odd = 0, even = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    return {odd, even};
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = evenOddCount(arr, n);
    cout << "Odd count: " << result[0] << ", Even count: " << result[1] << endl;
    return 0;
}