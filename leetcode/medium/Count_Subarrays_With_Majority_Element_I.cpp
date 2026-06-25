/*
    Problem Statement:
        You are given an integer array nums and an integer target.
        Return the number of subarrays of nums in which target is the majority element.
        The majority element of a subarray is the element that appears strictly more than half of the times in that subarray.
    
    Difficulty: Medium
    URL: https://leetcode.com/problems/count-subarrays-with-majority-element-i/?envType=daily-question&envId=2026-06-25
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        // Transform array: target -> +1, others -> -1
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = (nums[i] == target) ? 1 : -1;
        }

        int offset = n + 1;
        int size = 2 * n + 5;
        vector<int> bit(size, 0);

        auto update = [&](int idx, int val) {
            while (idx < size) {
                bit[idx] += val;
                idx += idx & -idx;
            }
        };

        auto query = [&](int idx) {
            int res = 0;
            while (idx > 0) {
                res += bit[idx];
                idx -= idx & -idx;
            }
            return res;
        };

        long long ans = 0;
        int prefix = 0;

        // Empty prefix sum
        update(offset, 1);

        for (int x : arr) {
            prefix += x;
            int idx = prefix + offset;

            // Count previous prefix sums smaller than current
            ans += query(idx - 1);

            update(idx, 1);
        }

        return ans;
    }
};

int main() {
    int n, target;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cin >> target;

    Solution sol;
    cout << sol.countMajoritySubarrays(nums, target) << endl;

    return 0;
}