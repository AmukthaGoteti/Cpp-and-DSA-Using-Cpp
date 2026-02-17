/*
    Problem Statement:
        You are given a string s. 
        You need to reverse each word in it where the words are separated by spaces and return the modified string.
        Note: The string may contain leading or trailing spaces, or multiple spaces between two words. 
        The returned string should only have a single space separating the words, and no extra spaces should be included.

    Examples:
        Input: s = " i like this program very much "
        Output: "i ekil siht margorp yrev hcum"
        Explanation: The words are reversed as follows:
        "i" -> "i","like"->"ekil",
        "this"->"siht","program" -> "margorp",
        "very" -> "yrev","much" -> "hcum".

        Input: s = " pqr mno "
        Output: "rqp onm"
        Explanation: The words are reversed as follows:
        "pqr" -> "rqp" ,
        "mno" -> "onm"

        Input: s = "pqr"
        Output: "rqp"
        Explanation: The words are reversed as follows:
        "pqr" -> "rqp"
*/

#include <iostream>
#include <sstream>
using namespace std;

string reverseWords(string s) {
    stringstream ss(s);
    string word;
    string result = "";

    while (ss >> word) {   // Automatically removes extra spaces
        reverse(word.begin(), word.end());  // Reverse each word
        
        if (!result.empty()) {
            result += " ";
        }
        result += word;
    }

    return result;
}

int main() {
    string s;
    getline(cin, s);
    cout << reverseWords(s) << endl;
    return 0;
}