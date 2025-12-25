// In C++, `unordered_map` stores unique key-value pairs using hashing, so elements are not sorted, but searching, inserting, and deleting are fast with average O(1) time.
/*
    The main difference is that unordered_set stores only unique values, while unordered_map stores key–value pairs.

    unordered_set: used when you only need to store and search unique elements.

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
    // Unordered map is defined as the std::unordered_map class template inside the <unordered_map> header file.
    // unordered_map<key_type, value_type> um;
    return 0;
}