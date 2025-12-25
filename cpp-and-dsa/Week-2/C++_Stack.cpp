/*
    Stack container follows LIFO (Last In First Out) order 
    of insertion and deletion. 
    It means that most recently inserted element is removed first 
    and the first inserted element will be removed last. 
    This is done by inserting and deleting elements 
    at only one end of the stack which is generally called 
    the top of the stack.
*/

#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> st;
    st.push(10);
    st.push(5);
    cout << "Top element: " << st.top() << endl;
}