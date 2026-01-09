/*
    Probelem Statement:
        Given a non-empty array of non-negative 
        integers nums, the degree of this array 
        is defined as the maximum frequency of any 
        one of its elements.
        Your task is to find the smallest 
        possible length of a (contiguous) 
        subarray of nums, 
        that has the same degree as nums.
    Examples:
        Input: nums = [1,2,2,3,1]
        Output: 2
        Explanation: 
            The input array has a degree of 2 because both 
            elements 1 and 2 appear twice.
            Of the subarrays that have the same degree:
            [1, 2, 2, 3, 1], [1, 2, 2, 3], [2, 2, 3, 1], 
            [1, 2, 2], [2, 2, 3], [2, 2]
            The shortest length is 2. So return 2.

        Input: nums = [1,2,2,3,1,4,2]
        Output: 6
        Explanation: 
            The degree is 3 because the element 2 is 
            repeated 3 times.
            So [2,2,3,1,4,2] is the shortest subarray, 
            therefore returning 6.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_map<int, int> freq;
    unordered_map<int, int> first;
    unordered_map<int, int> last;

    int degree = 0;

    // Track frequency, first index, and last index
    for (int i = 0; i < n; i++) {
        int val = nums[i];
        freq[val]++;
        if (!first.count(val)) first[val] = i;
        last[val] = i;
        degree = max(degree, freq[val]);
    }

    // Compute shortest subarray with same degree
    int minLength = n;
    for (auto &p : freq) {
        if (p.second == degree) {
            int val = p.first;
            int length = last[val] - first[val] + 1;
            minLength = min(minLength, length);
        }
    }

    cout << minLength << endl;
    return 0;
}