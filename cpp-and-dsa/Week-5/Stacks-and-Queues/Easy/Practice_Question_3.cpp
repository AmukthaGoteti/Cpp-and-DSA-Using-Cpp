/*
    Problem Statement:
        You are given a string s representing an infix expression. Convert this infix expression to a postfix expression.
            Infix expression: 
                The expression of the form a op b. When an operator is in between every pair of operands.
            Postfix expression: 
                The expression of the form a b op. When an operator is followed for every pair of operands.
        
        Note: 
            The precedence order is as follows: 
                (^) has the highest precedence and is evaluated from right to left, 
                (* and /) come next with left to right associativity, and (+ and -) 
                have the lowest precedence with left to right associativity.
    
    Examples:
        Input: s = "a*(b+c)/d"
        Output: abc+*d/
        Explanation: The expression is a*(b+c)/d. 
                     First, inside the brackets, b+c becomes bc+. 
                     Now the expression looks like a*(bc+)/d. 
                     Next, multiply a with (bc+), so it becomes abc+* . 
                     Finally, divide this result by d, so it becomes abc+*d/.
        
        Input: s = "a+b*c+d"
        Output: abc*+d+
        Explanation: The expression a+b*c+d is converted by first doing b*c -> bc*, 
                     then adding a -> abc*+, and finally adding d -> abc*+d+.
        
        Input: s = "(a+b)*(c+d)"
        Output: ab+cd+*
        Explanation: The expression (a+b)*(c+d) is converted by first doing (a+b) -> ab+, 
                     then doing (c+d) -> cd+, and finally the expression ab+*cd+ becomes ab+cd+*. 
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

string infixToPostfix(const string &s) {
    string res;
    stack<char> st;
    for (char c : s) {
        if (isalnum((unsigned char)c)) {
            res.push_back(c);
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                res.push_back(st.top()); st.pop();
            }
            if (!st.empty() && st.top() == '(') st.pop();
        } else if (isOperator(c)) {
            while (!st.empty() && isOperator(st.top())) {
                char top = st.top();
                int pTop = precedence(top);
                int pCurr = precedence(c);
                // '^' is right-associative: pop only if top has greater precedence
                if ((c == '^' && pTop > pCurr) || (c != '^' && pTop >= pCurr)) {
                    res.push_back(top); 
                    st.pop();
                } else break;
            }
            st.push(c);
        }
        // ignore other characters (e.g., spaces)
    }
    while (!st.empty()) {
        if (st.top() != '(' && st.top() != ')') res.push_back(st.top());
        st.pop();
    }
    return res;
}

int main() {
    string s;
    if (!(cin >> s)) return 0;
    cout << infixToPostfix(s) << '\n';
    return 0;
}