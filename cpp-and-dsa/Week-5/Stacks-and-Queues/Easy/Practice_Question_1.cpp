/*
    Problem Statment:
    Given a stack, the task is to sort it such that the top of the stack has the greatest element.Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']'. Determine whether the Expression is balanced or not.
    An expression is balanced if:
        Each opening bracket has a corresponding closing bracket of the same type.
        Opening brackets must be closed in the correct order.
    
    Examples :
        Input: s = "[{()}]"
        Output: true
        Explanation: All the brackets are well-formed.

        Input: s = "[()()]{}"
        Output: true
        Explanation: All the brackets are well-formed.

        Input: s = "([]"
        Output: false
        Explanation: The expression is not balanced as there is a missing ')' at the end.

        Input: s = "([{]})"
        Output: false
        Explanation: The expression is not balanced as there is a closing ']' before the closing '}'.
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> s;
    string str;
    cout << "Enter the expression: ";
    cin >> str;
    bool isBalanced = true;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) {
                isBalanced = false;
                break;
            }
            char top = s.top();
            if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')) {
                s.pop();
            } else {
                isBalanced = false;
                break;
            }
        }
    }
    if (!s.empty()) {
        isBalanced = false;
    }
    cout << (isBalanced ? "true" : "false") << endl;
}