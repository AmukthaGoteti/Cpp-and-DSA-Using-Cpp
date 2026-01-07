/*
    Problem Statement:
        Given an array of integers nums 
        and an integer target, 
        return indices of the two numbers 
        such that they add up to target.
        You may assume that each input would have 
        exactly one solution, 
        and you may not use the same element twice.
        You can return the answer in any order.

    Examples:
        Input: nums = [2,7,11,15], target = 9
        Output: [0,1]
        Explanation: Because nums[0] + nums[1] == 9, 
                    we return [0, 1].
        
        Input: nums = [3,2,4], target = 6
        Output: [1,2]

        Input: nums = [3,3], target = 6
        Output: [0,1]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {   // start from i+1
            if (nums[i] + nums[j] == target) {
                return {i, j};             // return indices
            }
        }
    }
    return {}; // no solution found
}

int main() {
    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> nums(n);                   // allocate size
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = twoSum(nums, target);

    if (!ans.empty()) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}