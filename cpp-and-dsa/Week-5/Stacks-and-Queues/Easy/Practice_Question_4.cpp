/*
    Problem Statement:
        Given an array of strings arr[] representing an infix expression, we have to evaluate it. 
        An infix expression is of the form "operand1 operator operand2" (e.g., "a + b"), 
        where the operator is written between the two operands.
    
        Note:
            Infix expressions follow precedence: ^ (highest, right-to-left), then * and /, and finally + and - 
            (left-to-right). Division / uses floor division.
        
        Examples:
            Input: arr[] = ["100", "+", "200", "/", "2", "*", "5", "+", "7"] 
            Output: 607
            Explanation: The expression can be directly read as: (100 + 200 / 2 * 5 + 7). Now, evaluate step by step:
                         200 / 2 = 100
                         100 * 5 = 500
                         500 + 100 = 600
                         600 + 7 = 607
                         Final Answer: 607

            Input: arr[] = ["2", "^", "3", "^", "2"]
            Output: 512
            Explanation: ^ is right-associative → 2 ^ (3 ^ 2) = 2 ^ 9 = 512.
                         Final Answer: 512
*/

/*
    Using Stack - O(n) Time and O(n) Space:
        To evaluate an infix expression, we must respect operator precedence and associativity. 
        If we try to calculate directly from left to right, 
        the result may be wrong because * and / should come before + and -.
    
    How Expression is Evaluated?
        1. Traverse the expression from left to right.
        2. If it’s an operand, push it onto the operand stack.
        3. If it’s an operator, compare its precedence (and associativity) with the operator on top of the stack:
        4. If the new operator has higher precedence, or same precedence but is right-associative, push it.
        5. Otherwise, apply the operator from the stack on the top two operands until the condition is satisfied, 
           then push the new operator.
        6. After scanning the whole expression, apply the remaining operators on the stack to the operands stack to 
           get the result.
*/

#include <iostream>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;

// Function to perform calculation on two numbers
int applyOperation(int a, int b, string op) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    
    if (op == "/") {
        if (a * b < 0 && a % b != 0)
            return (a / b) - 1;
        return a / b;
    }
    
    if (op == "^") return pow(a, b);
    return 0;
}

// Function to return precedence of operators
int precedence(string op) {
    if (op == "+" || op == "-") return 1;
    if (op == "*" || op == "/") return 2;
    if (op == "^") return 3;
    return 0;
}

// Function to check if operator is right-associative
bool isRightAssociative(string op) {
    return (op == "^");
}

bool isNumber(string& token) {
    if (token.empty()) return false;
    int start = (token[0] == '-') ? 1 : 0;
    if (start == 1 && token.size() == 1) return false;
    for (int i = start; i < token.size(); i++) {
        if (!isdigit(token[i])) return false;
    }
    return true;
}

// Function to evaluate infix expression
int evaluateInfix(vector<string>& arr) {
    stack<int> values;     
    stack<string> ops;     
   
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        string token = arr[i];

        // If it's a number, push to values stack
        if (isNumber(token)) {
            values.push(stoi(token));
        }
       
        // If it's an operator
        else {
            while (!ops.empty() && 
                   ((precedence(ops.top()) > precedence(token)) ||
                   (precedence(ops.top()) == precedence(token) &&
                                    !isRightAssociative(token)))) {
                
                int val2 = values.top(); values.pop();
                int val1 = values.top(); values.pop();
                
                string op = ops.top(); ops.pop();
                
                values.push(applyOperation(val1, val2, op));
            }
            ops.push(token);
        }
    }

    // Process remaining operators
    while (!ops.empty()) {
        int val2 = values.top(); values.pop();
        int val1 = values.top(); values.pop();
      
        string op = ops.top(); ops.pop();
        values.push(applyOperation(val1, val2, op));
    }

    return values.top();
}

int main() {
    vector<string> arr;
    int n;
    cout << "Enter the number of elements in the infix expression: ";
    cin >> n;
    cout << "Enter the infix expression (space-separated): ";
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    cout << evaluateInfix(arr) << endl; 

    return 0;
}