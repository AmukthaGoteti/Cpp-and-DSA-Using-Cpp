/* 
    In C++, `unordered_map` stores unique key-value pairs using hashing, 
    so elements are not sorted, but searching, inserting, and deleting 
    are fast with average O(1) time.
*/
/*
    The main difference is that unordered_set stores only unique values, 
    while unordered_map stores key–value pairs.
        unordered_set: used when you only need to store and search 
                        unique elements.
        unordered_map: used when each value must be linked to a unique key.
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> um = {{1, "Geeks"}, {2, "For"}, {3, "C++"}};
    for(auto i : um) {
        cout << i.first <<": " << i.second << endl;
    }
    // Unordered map is defined as 
    // the std::unordered_map class template inside 
    // the <unordered_map> header file.
    // Syntax -> unordered_map<key_type, value_type> um;

    // Declararion and Initialization
    unordered_map<int, string> um1 = {{1, "Geeks"}, {2, "For"}, {3, "C++"}};
    for (auto x : um1) {
        cout << x.first << " " << x.second << endl;
    }

    // Basic Operations
    // Inserting Elements
    /*
        A new key-value pairs can be inserted in unordered map using either 
        [] operator 
        or insert() method. 
        If the element with the given key already exists, 
        the insert() method skip the insertion but [] operator 
        updates the associated value to the new value.
    */
    unordered_map<int, string> um2;
    um2[1] = "Geeks";
    um2.insert({2, "For"});
    um2.insert({3, "C++"});
    for(auto i : um2) {
        cout << i.first << " " << i.second << endl;
    }
    // Acessing Elements
    /*
        Elements in unordered map can be accessed using 
        the [] operator or at() function. 
        But if the key is not found, 
        [] operator insert default value for key then return that 
        default value. So, it is better to use at() method.
    */
    unordered_map<int, string> um3 = {{1, "Geeks"}, {2, "For"}, {3, "C++"}};
    cout << um3[2] << endl;
    cout << um3.at(1) << endl;
    return 0;
}