/*
    Problem Question:
        Given an integer array arr[], 
        find the subarray (containing at least one element) 
        which has the maximum possible sum, and return that sum.
        Note: A subarray is a continuous part of an array.

    Example:
        Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
        Output: 11
        Explanation: The subarray [7, -1, 2, 3]
                    has the largest sum 11.
                    
        Input: arr[] = [-2, -4]
        Output: -2
        Explanation: The subarray [-2] has the largest sum -2.

        Input: arr[] = [5, 4, 1, 7, 8]
        Output: 25
        Explanation: The subarray [5, 4, 1, 7, 8] 
                    has the largest sum 25.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    /* Option 1: Print Subarrays and 
                 Find Maximum Sum of the Subarrays
    */
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Step 1: Create Subarays
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++){
            for(int k = i; k < n; k++) {
                cout << arr[k] << ", ";
            }
            cout << endl;
        }
    }
    // Step 2: Find the maximum sum of all the subarrys
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;

    // Option 2: Find the maxium without printing subarrays
    /*
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int maxSum = INT_MIN;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += arr[j];
                maxSum = max(maxSum, sum);
            }
        }
        cout << maxSum << endl;
    */
}