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
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;

    // Stack is defined as std::stack class template inside the <stack> header file.
    // Syntax -> stack<T> st;
    // T: DataType (int, char etc.) of elements in the stack
    // st: Name assigned to the stack.

    // Basic Operations
    // Insertion Elements
    /*
        In stack, new elements can only be inserted at the top of 
        the stack by using push() method.
    */
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // Accessing Elements
    /*
        Only the top element of the stack can be accessed using top() method.
    */
    cout << st.top() << endl;
    // Peek() is used to only view the topmost element of the stack not print it.
    // Deleting Elements
    /*
        In stack, only the top element of the stack can be deleted by using pop() method in one operation.
    */
    st.pop();
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    // empty()
    /*
        This checks whether the stack is empty.
        It returns true if the stack has no elements; otherwise, it returns false.
    */
    if(st.empty()) {
        cout << "Stack is empty" << endl;
    }
    st.push(100);
    if(!st.empty()) {
        cout << "Stack is not empty. Top eleemnt: " << st.top() << endl;
    }
    // Size of stack
    /*
        The size() function in a stack returns the number of 
        elements currently in the stack. 
        It helps to determine how many items are 
        stored without modifying the stack.
    */
    st.push(10);
    st.push(5);
    cout << "Size of stack: " << st.size() << endl;
    st.pop();
    cout << "Size of stack: " << st.size() << endl;

    // Pseudo Traversal
    /*
        A stack lets you see only the top element, so you cannot directly traverse it.
        To traverse it safely, make a copy of the stack and 
        repeatedly read and 
        remove the top element from the copy until 
        it becomes empty, while the original stack remains unchanged.
    */
    st.push(10);
    st.push(20);
    st.push(30);
    stack<int> temp(st);
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    /*
        The below table lists the time complexity of the above operations on stack:

        Operation	                Time Complexity
        Insert an element (push)	O(1)
        Delete an element (pop)	    O(1)
        Access top element (peek)	O(1)
        Traverse the stack	        O(n)
    */
    return 0;
}