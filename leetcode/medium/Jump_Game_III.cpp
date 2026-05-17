/*
    Problem: 1306. Jump Game III
    Difficulty: Medium
    Link: https://leetcode.com/problems/jump-game-iii/description/?envType=daily-question&envId=2026-05-17
    Problem Statement:
        Given an array of non-negative integers arr, you are initially positioned at start index of the array. When you are at index i, you can jump to i + arr[i] or i - arr[i], check if you can reach any index with value 0.
        Notice that you can not jump outside of the array at any time.
    Example 1:
    Input: arr = [4,2,3,0,3,1,2], start = 5
    Output: true
    Explanation: 
    All possible ways to reach at index 3 with value 0 are: 
    index 5 -> index 4 -> index 1 -> index 3 
    index 5 -> index 6 -> index 4 -> index 1 -> index 3 

    Example 2:
        Input: arr = [4,2,3,0,3,1,2], start = 0
        Output: true 
        Explanation: 
        One possible way to reach at index 3 with value 0 is: 
        index 0 -> index 4 -> index 1 -> index 3

    Example 3:
        Input: arr = [3,0,2,1,2], start = 2
        Output: false
        Explanation: There is no way to reach at index 1 with value 0.
*/
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();

        queue<int> q;
        vector<bool> visited(n, false);

        q.push(start);

        while (!q.empty()) {
            int i = q.front();
            q.pop();

            if (visited[i])
                continue;

            if (arr[i] == 0)
                return true;

            visited[i] = true;

            int forward = i + arr[i];
            int backward = i - arr[i];

            if (forward < n)
                q.push(forward);

            if (backward >= 0)
                q.push(backward);
        }

        return false;
    }
};

int main() {
    vector<int> arr = {4, 2, 3, 0, 3, 1, 2};
    int start = 5;

    Solution sol;

    if (sol.canReach(arr, start))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}