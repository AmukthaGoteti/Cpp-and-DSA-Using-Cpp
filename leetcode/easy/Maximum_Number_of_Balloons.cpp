/*
    Problem Statement:
        Given a string text, you want to use the characters of text to 
        form as many instances of the word "balloon" as possible.
        You can use each character in text at most once. 
        Return the maximum number of instances that can be formed.
    
    Difficulty: Easy
    URL: https://leetcode.com/problems/maximum-number-of-balloons/description/?envType=daily-question&envId=2026-06-22
*/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string text;
    cout << "Enter the text: ";
    cin >> text;
    unordered_map<char, int> charCount;
    for (char c : text) {
        if (c == 'b' || c == 'a' || c == 'l' || c == 'l' || c == 'o' || c == 'o'  || c == 'n') {
            charCount[c]++;
        }
    }
    int maxBalloons = min({charCount['b'] / 1, charCount['a'] / 1, charCount['l'] / 2, charCount['o'] / 2, charCount['n'] / 1});
    cout << "Maximum number of instances of 'balloon' that can be formed: " << maxBalloons << endl;
}