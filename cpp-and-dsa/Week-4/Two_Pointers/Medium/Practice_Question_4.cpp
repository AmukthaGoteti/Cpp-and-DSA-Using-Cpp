/*
    Problem Statement:
        The pair sum of a pair (a,b) is equal to a + b. 
        The maximum pair sum is the largest pair sum in a list of pairs.
        For example, if we have pairs (1,5), (2,3), and (4,4), 
        the maximum pair sum would be max(1+5, 2+3, 4+4) = max(6, 5, 8) = 8.
        Given an array nums of even length n, pair up the elements of nums into n / 2 pairs such that:
        Each element of nums is in exactly one pair, and
        The maximum pair sum is minimized.
        Return the minimized maximum pair sum after optimally pairing up the elements.
    
    Examples:
        Input: nums = [3,5,2,3]
        Output: 7
        Explanation: The elements can be paired up into pairs (3,3) and (5,2).
        The maximum pair sum is max(3+3, 5+2) = max(6, 7) = 7.

        Input: nums = [3,5,4,2,4,6]
        Output: 8
        Explanation: The elements can be paired up into pairs (3,5), (4,4), and (6,2).
        The maximum pair sum is max(3+5, 4+4, 6+2) = max(8, 8, 8) = 8.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {3, 5, 2, 3};
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int maxPairSum = 0;
    for (int i = 0; i < n / 2; i++) {
        int pairSum = nums[i] + nums[n - 1 - i];
        maxPairSum = max(maxPairSum, pairSum);
    }
    cout << "The minimized maximum pair sum is: " << maxPairSum << endl;
    return 0;
}