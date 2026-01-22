/*
    Problem Statement:
        Given an integer array nums and an integer k, return true
        if there are 2 distinct indices i and j in the array such
        that nums[i] == nums[j] and abs(i - j) <= k.

    Examples:
        Input: nums = [1,2,3,1], k = 3
        Output: true

        Input: nums = [1,0,1,1], k = 1
        Output: true

        Input: nums = [1,2,3,1,2,3], k = 2
        Output: false
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the length of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    unordered_set<int> window;
    for (int i = 0; i < n; i++) {
        if (window.find(nums[i]) != window.end()) {
            cout << "Output: true" << endl;
            return 0;
        }
        window.insert(nums[i]);
        if (window.size() > k) {
            window.erase(nums[i - k]);
        }
    }
    cout << "Output: false" << endl;
    return 0;
}