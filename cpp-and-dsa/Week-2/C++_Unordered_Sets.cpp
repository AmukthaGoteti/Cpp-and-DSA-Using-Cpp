/*
    In C++, unordered_set is an unordered associative container that stores unique elements.
    Internally uses a hashing to store elements which provides average constant time O(1) for insert, search and delete operations.
    Elements have no particular order and are best used when fast access is more important than sorted order. On other hand set is used for sorted order and less access time.
*/
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {1,2, 3, 4, 5};
    for (auto x : us) {
        cout << x << " ";
    }
    cout << endl;

    // Syntax -> Unordered set is defined as std::unordered_set class template inside the <unordered_set> header file.
    // unordered_set<T> us;
    // where, T: Type of the key. us: Name assigned to the unordered set.
    unordered_set<int> us1;
    // Initialize an unordered_set
    unordered_set<int> us2 = {1, 2, 3, 4, 5};
    for (auto x : us2) {
        cout << x << " ";
    }
    cout << endl;

    // Basic Operation
    // Insertion Elements
    /*
        New elements can be inserted into unordered set using insert() method. We cannot specify the position to insert the element as it is automatically decided by its hashed value.
    */
    unordered_set<int> us3;
    us3.insert(3);
    us3.insert(2);
    us3.insert(1);
    for(auto x: us3) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}