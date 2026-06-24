/*
    Problem Statement:
        You are given three integers n, l, and r.
        A ZigZag array of length n is defined as follows:
        Each element lies in the range [l, r].
        No two adjacent elements are equal.
        No three consecutive elements form a strictly increasing or strictly decreasing sequence.
        Return the total number of valid ZigZag arrays.
        Since the answer may be large, return it modulo 109 + 7.
        A sequence is said to be strictly increasing if each element is strictly greater than its previous one (if exists).
        A sequence is said to be strictly decreasing if each element is strictly smaller than its previous one (if exists).
    
    Difficulty: Hard
    URL: https://leetcode.com/problems/number-of-zigzag-arrays-ii/description/?envType=daily-question&envId=2026-06-24
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    static const int MOD = 1e9 + 7;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        if (n == 1) return m % MOD;
        if (m == 1) return 0;

        vector<long long> up(m + 1, 0), down(m + 1, 0);

        // Length = 2
        for (int x = 1; x <= m; x++) {
            up[x] = x - 1;
            down[x] = m - x;
        }

        for (int len = 3; len <= n; len++) {
            vector<long long> newUp(m + 1, 0);
            vector<long long> newDown(m + 1, 0);

            long long prefix = 0;
            for (int x = 1; x <= m; x++) {
                newUp[x] = prefix;
                prefix = (prefix + down[x]) % MOD;
            }

            long long suffix = 0;
            for (int x = m; x >= 1; x--) {
                newDown[x] = suffix;
                suffix = (suffix + up[x]) % MOD;
            }

            up = move(newUp);
            down = move(newDown);
        }

        long long ans = 0;

        for (int x = 1; x <= m; x++) {
            ans = (ans + up[x] + down[x]) % MOD;
        }

        return (int)ans;
    }
};

int main() {
    int n, l, r;

    cout << "Enter n, l, r: ";
    cin >> n >> l >> r;

    Solution sol;
    cout << sol.zigZagArrays(n, l, r) << endl;

    return 0;
}