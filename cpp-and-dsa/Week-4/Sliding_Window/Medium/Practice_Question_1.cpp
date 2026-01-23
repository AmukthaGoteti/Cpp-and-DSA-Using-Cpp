/*
    Problem Statement:
        Given an array of positive integers nums and a positive integer target, 
        return the minimal length of a subarray whose sum is greater than or equal to target. 
        If there is no such subarray, return 0 instead.
    
    Examples:
        Input: target = 7, nums = [2,3,1,2,4,3]
        Output: 2
        Explanation: The subarray [4,3] has the minimal length under the problem constraint.

        Input: target = 4, nums = [1,4,4]
        Output: 1

        Input: target = 11, nums = [1,1,1,1,1,1,1,1]
        Output: 0
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int target;
    cout << "Enter the target sum: ";
    cin >> target;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int left = 0, sum = 0, minLength = INT_MAX;
    for (int right = 0; right < n; right++) {
        sum += nums[right];
        while (sum >= target) {
            minLength = min(minLength, right - left + 1);
            sum -= nums[left];
            left++;
        }
    }
    if (minLength == INT_MAX) {
        cout << "Output: 0" << endl;
    } else {
        cout << "Output: " << minLength << endl;
    }
    return 0;
}