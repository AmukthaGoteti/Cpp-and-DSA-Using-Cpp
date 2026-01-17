/*
    Problem Statement:
        Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
    
    Examples:
        Input: nums = [1,2,3,4,5,6,7], k = 3
        Output: [5,6,7,1,2,3,4]
        Explanation:
            rotate 1 steps to the right: [7,1,2,3,4,5,6]
            rotate 2 steps to the right: [6,7,1,2,3,4,5]
            rotate 3 steps to the right: [5,6,7,1,2,3,4]
        
        Input: nums = [-1,-100,3,99], k = 2
        Output: [3,99,-1,-100]
        Explanation: 
            rotate 1 steps to the right: [99,-1,-100,3]
            rotate 2 steps to the right: [3,99,-1,-100]
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the Elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k;
    cout << "Enter the number of times the array should be rotated: ";
    cin >> k;
    // Handle larger k
    k = k % n;
    // Reverse technique:
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    cout << "Rotated array: ";
    for(int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}