/*
    Problem Statement:
        Given an integer array nums, move all the even integers at the 
        beginning of the array followed by all the odd integers.
        Return any array that satisfies this condition.
    
    Examples:
        Input: nums = [3,1,2,4]
        Output: [2,4,3,1]
        Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.

        Input: nums = [0]
        Output: [0]
*/
#include <iostream>
#include <vector>
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
    vector<int> result; 
    result.reserve(n);
    // Push evens first
    for (int x : nums) {
        if (x % 2 == 0) result.push_back(x);
    }
    // Then push odds
    for (int x : nums) {
        if (x % 2 != 0) result.push_back(x);
    }
    cout << "Rearranged array: ";
    for (int x : result) cout << x << " ";
    cout << endl;
}