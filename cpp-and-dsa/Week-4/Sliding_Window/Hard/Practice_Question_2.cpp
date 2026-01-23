/* 
    Problem Statement:
        Given an integer array nums and an integer k, return the number of good subarrays of nums.
        A good array is an array where the number of different integers in that array is exactly k.
        For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.
        A subarray is a contiguous part of an array.

    Examples:
        Input: nums = [1,2,1,2,3], k = 2
        Output: 7
        Explanation: Subarrays formed with exactly 2 different integers: 
                     [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2]

        Input: nums = [1,2,1,3,4], k = 3
        Output: 3
        Explanation: Subarrays formed with exactly 3 different integers: 
                     [1,2,1,3], [2,1,3], [1,3,4].
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> k;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> result;
    for (int i = 0; i + k <= n; i++) {
        vector<int> temp(nums.begin() + i, nums.begin() + i + k);
        result.push_back(temp);
    }
    cout << "Subarrays of size " << k << " are:" << endl;
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        unordered_map<int, int> freqMap;
        for (int j = i; j < n; j++) {
            freqMap[nums[j]]++;
            if (freqMap.size() == k) {
                count++;
            }
        }
    }
    cout << "Number of good subarrays: " << count << endl;
    return 0;
}