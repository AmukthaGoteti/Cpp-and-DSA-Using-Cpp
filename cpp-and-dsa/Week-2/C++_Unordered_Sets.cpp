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

    // Accessing Elements
    /*
        In an unordered set, you cannot use an index to access elements, so you must move an iterator from `begin()` using `next()` or `advance()` to reach a specific position.
    */
    unordered_set<int> us4 = {1, 2, 3, 4, 5};
    // Accesing third element
    auto it = next(us4.begin(), 2);
    cout << *it << " " << endl;
    // This operation is not very useful in unordered containers.
    
    // Updating Elements
    // In unordered set, the value of the elements cannot be changed after it is inserted.

    // Finding Elements
    // An unordered set allows fast searching using `find()`, which returns an iterator to the element if it exists, or `end()` if it does not.
    unordered_set<int> us5 = {1, 2, 3, 4, 5};
    auto it1 = us5.find(4);
    if(it1 != us5.end()) {
        cout << *it1;
    }
    else {
        cout << "Element not Found";
    }
    cout << endl;

    // Traversing Elements
    /*
        Unordered set can be traverse either range-based for loop or using begin() and end() iterator in a loop.
    */
    unordered_set<int> us6 = {1, 2, 3, 4, 5};
    for (auto it2 = us6.begin(); it2 != us6.end(); it2++) {
        cout << *it2 << " ";
    }
    cout << endl;

    // Dleeting Elements
    /*
        Elements can be removed from the unoreded set using erase() method.
        We can erase elements either by value or by position.
    */
    unordered_set<int> us7 = {1, 2, 3, 4, 5};
    us7.erase(5);
    for (auto x : us7) {
        cout << x << " ";
    }
    cout << endl;
    us7.erase(us7.begin());
    for (auto x : us7) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}