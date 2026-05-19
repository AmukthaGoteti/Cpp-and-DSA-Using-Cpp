/*
    Problem Statement:
        Given two integer arrays nums1 and nums2, sorted in non-decreasing order, 
        return the minimum integer common to both arrays. 
        If there is no common integer amongst nums1 and nums2, return -1.
        Note that an integer is said to be common to nums1 and nums2 
        if both arrays have at least one occurrence of that integer.
    
    Difficulty: Easy
    URL: https://leetcode.com/problems/minimum-common-value/
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;

    // Input sizes
    cin >> n >> m;

    vector<int> nums1(n);
    vector<int> nums2(m);

    // Input elements of nums1
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    // Input elements of nums2
    for (int j = 0; j < m; j++) {
        cin >> nums2[j];
    }

    int minimum_common_value = -1;

    // Find common values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (nums1[i] == nums2[j]) {

                // Update minimum common value
                if (minimum_common_value == -1 || nums1[i] < minimum_common_value) {
                    minimum_common_value = nums1[i];
                }
            }
        }
    }

    // Output result
    cout << minimum_common_value << endl;

    return 0;
}