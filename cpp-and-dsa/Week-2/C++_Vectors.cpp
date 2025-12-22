// A vector represents a dynamic sized array in the Standard Template Library(STL) that automatically grows when elements are added beyond current capacity.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v; // Declaration of vector
    vector<int> v1(3,5);
    for (int x : v1) {
        cout << x << " ";
    }
    cout << endl;
    vector<int> v2 = {1, 2, 3};
    for (int x : v2) {
        cout << x << " ";
    }
    cout << endl;

    // A vector is defined as the std::vector class template in the <vector> header file.
    // vector<T> v;
    // where T is the data type of elements and v is the name assigned to the vector.
    // Vectors in C++ support various useful operations that allow you to add, remove, access, and modify elements dynamically.
    /*
        push_back(value) : Inserts element at the end of the vector efficiently.
        Takes constant time O(1) on average, so it's very fast.
        insert(position, value) : Inserts element at any position (beginning, middle, or end).
        Takes linear time O(n), as it shifts elements to make space.
    */
    vector<char> v3 = {'a', 'f', 'd'};
    v3.push_back('z'); // Insert at the end
    v3.insert(v3.begin() + 1, 'c');
    for (int i = 0; i< v3.size(); i++) {
        cout<< v3[i] << " ";
    }
    cout << endl;
    /*
        You can access elements in a vector using v[i] for direct access or v.at(i) for bounds-checked access.
        Both return the element at index i, but at(i) throws an exception if i is out of range.
        It takes constant time O(1) on average, so it's very fast.
    */
    vector<int> v4 = {10, 20, 30, 40};
    cout << v4[2] << endl;    // Direct access
    cout << v4.at(3) << endl; // Bounds-checked access
    // Uncommenting the next line will throw an 
    // out_of_range exception 
    // cout v.at(10)<<endl;
    /*
        To update an element, you simply use its index with the assignment operator, for example v[i]=newValue;
        This replaces the old element at index i with the new value you want.
    */
    vector<int> v5 = {10, 20, 30};
    cout << "Original value at index 1: " << v5[1] << endl;
    v5[1] = 50; // Update element at index 1
    cout << "Updated value at index 1: " << v5[1] << endl;
    // We can find the size(number of elements) of a vector using the size() function, like v.size().
    vector<char> v6 = {'a', 'c', 'f', 'd', 'z'};
    cout << v6.size() << endl; // Size of vector

    /*
        Traversing a vector means going through each element one by one, usually using a loop.
        You can use a for loop with an index (v[i]), a range-based for loop (for(int x: v)), or iterators.
        It takes linear time O(n).
    */
    vector<char> v7 = {'a', 'c', 'f', 'd', 'z'};
    for (int i = 0; i < v7.size(); i++) {
        cout << v7[i] << " ";
    }
    cout << endl;

    // You can remove elements from a vector using `erase()`, but it is slow because all the elements after it must be shifted, so it takes O(n) time; to quickly remove the last element, use `pop_back()`, which is fast and takes O(1) time.
    vector<char> v8 = {'a', 'c', 'f', 'd', 'z'};
    v8.pop_back();
    v8.erase(find(v8.begin(), v8.end(), 'f'));
    for (int i = 0; i < v8.size(); i++) {
        cout << v8[i] << " ";
    }
    cout << endl;
    return 0;
}