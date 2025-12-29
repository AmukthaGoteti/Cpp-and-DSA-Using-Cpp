/*
    Problem:
        Vector insert() in C++
    Example:
        In C++, the vector insert() is a built-in function used to 
        insert new elements at the given position in a vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 3, 7, 9};
    // Insert element 8 at index 2
    v.insert(v.begin() + 2, 8);
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Syntax
    /*
        v.insert(pos, val);   // Insert single element 
        v.insert(pos, n, val);   // Insert multiple copies of an element
        v.insert(pos, {val1, val2, ...})   // Insert list of elements
        v.insert(pos, first, last);   // Insert range of elements
    */
    // Insert an Element at Given Index
    // We can use the vector insert() function to insert the element at the given index. All the elements to the right of the given index will be shifted once place to the right to make space for new element.
    // Syntax -> v.insert (pos, val);
    /* 
        val: Value to be inserted.
        pos: Iterator to the position where val is to be inserted. 
    */
    vector<int> v1 = {1, 2, 4, 5};
    v1.insert(v1.begin() + 2, 3);
    for(auto i : v1) {
        cout << i << " ";
    }
    cout << endl;
    // Insert Multiple Copies of an Element
    // The vector insert() can also be used to insert multiple copies of an element at the given index.
    // Syntax -> v.insert(pos, n, val)
    /*
        val - Value to be inserted.
        pos: Iterator to the position where val is to be inserted.
        n: Number of times val is to be inserted.
    */
    vector<int> v2 = {1, 3, 4, 5};
    v2.insert(v2.begin() + 1, 3, 2);
    for(auto i: v2)
        cout << i << " ";
    cout << endl;
    // Insert List of Elements
    // The vector insert() function can also insert elements from an initializer list at given index.
    // Syntax -> v.insert(pos, {val1, val2, ...});
    /*
        pos - Iterator to the position where range is to be inserted.
        {val1, val2, ...} - Initializer list containing values to insert.
    */
    vector<int> v3 = {1, 2, 3, };
    v3.insert(v3.begin() + 3, {4, 5});
    for(auto i : v3) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}