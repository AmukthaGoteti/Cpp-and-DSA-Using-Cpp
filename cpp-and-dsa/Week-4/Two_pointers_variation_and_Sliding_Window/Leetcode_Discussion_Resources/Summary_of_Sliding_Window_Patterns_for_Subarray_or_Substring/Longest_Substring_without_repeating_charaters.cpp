/*
    Problem Statement:
        Given a string s, 
        find the length of the 
        longest substring 
        without duplicate characters.
    
    Examples:
        Input: s = "abcabcbb"
        Output: 3
        Explanation: The answer is "abc", 
                     with the length of 3.
                     Note that "bca" and "cab" 
                     are also correct answers.
        
        Input: s = "bbbbb"
        Output: 1
        Explanation: The answer is "b", 
                     with the length of 1.
        
        Input: s = "pwwkew"
        Output: 3
        Explanation: The answer is "wke", 
                     with the length of 3.
                     Notice that the 
                     answer must be a substring, 
                     "pwke" is a subsequence 
                     and not a substring.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int lenghtOfLongestSubstring(string s) {
    unordered_map<char, int> counts;
    int res = 0;
    int i = 0;
    for(int j = 0; j < s.length(); j++) {
        counts[s[j]]++;
        while(counts[s[j]] > 1) {
            counts[s[i++]] --;
        }
        res = max(res, j - i + 1);
    }
    return res;
}

int main() {
    string s;
    cout << "Enter a String (s): ";
    cin >> s;
    cout << lenghtOfLongestSubstring(s) << endl;
}