/*
    Problem Statement:
        Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.
        A subarray is a contiguous part of the array.
    
    Examples:
        Input: nums = [1,0,1,0,1], goal = 2
        Output: 4
        Explanation: The 4 subarrays are bolded and underlined below:
                     [1,0,1,0,1]
                     [1,0,1,0,1]
                     [1,0,1,0,1]
                     [1,0,1,0,1]

        Input: nums = [0,0,0,0,0], goal = 0
        Output: 15
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, goal;
    cout << "Enter the number of elements in the binary array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the binary array (0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the goal sum: ";
    cin >> goal;
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1; // There's one way to have a prefix sum of 0
    int currentSum = 0, result = 0;
    for (int i = 0; i < n; i++) {
        currentSum += nums[i];
        if (prefixSumCount.find(currentSum - goal) != prefixSumCount.end()) {
            result += prefixSumCount[currentSum - goal];
        }
        prefixSumCount[currentSum]++;
    }
    cout << "Output: " << result << endl;
    return 0;
}