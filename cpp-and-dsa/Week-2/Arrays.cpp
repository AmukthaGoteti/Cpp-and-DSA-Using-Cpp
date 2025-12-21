// An Array is a collection of elements of same type placed in contiguous memory locations.
// It allows you to store multiple values under a single name and access them using an index.

#include <iostream>
using namespace std;

int main() {
    // Declaring and initializing an array of size 5
    int arr[5] = {2, 4, 8, 12, 16};
    // Printing array elements
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    /*
        We can create/declare an array by simply specifying 
        the data type first and then the name of the array with 
        its size inside [] square brackets
        (better known as array subscript operator).
        The syntax to declare an array is:
        data_type array_name [size]
        This statement will create an array with name array_name 
        that can store size elements of given data_type. 
        Once the array is declared, its size cannot be changed.
    */

    int arr1[5];
    // When we declared an array, 
    // the elements of array do not contain any valid value.

    // Initializing means assigning initial values to aaray elements.
    // We can initialize the array 
    // with values enclosed in curly braces '{}' as assigned to the array.
    int arr2[5] = {2, 4, 8, 12, 16};

    // These values will be assigned sequentially.
    // It means that 1st element (index 0) will be assigned 2,
    // 2nd element (index 1) will be assigned 4 and so on.
    // The number of values in the list cannot be more than 
    // the size of the array.
    int arr3[5] = {2, 4, 8}; // rest elements will be initialized to 0

    // The size of the array can be skipped if the size should be same
    // as the number of the values.
    int arr4[] = {2, 4, 8, 12, 16}; // size is 5

    // Moreover, all the elements can be easily initialized to 0
    int arr5[5] = {0}; // all elements will be initialized to 0
    // This method only works for 0, but not for any other value.
    // Note: The value assigned should be of the same type of the array elements specified in the declaration.
    // Elements of an array can be accessed by the their position (called index) in the sequence.
    // In C++, indexes of an array starts from 0 instead of 1.
    // We just have to pass this index inside the [] square brackets with the array name.
    // array_name[index]
    // It is important to note that index cannot be negative or greater than size of the array minus 1. 
    // (0 ≤ index ≤ size - 1). 
    // Also, it can also be any expression that results in valid index value.
    int arr6[] = {2, 4, 8, 12, 16};
    // Accessing 4th element
    cout << arr6[3] << endl; // Output: 12
    // Accessing 1st element
    cout << arr6[0] << endl; // Output: 2
    // To change the element at a particular index in an array, 
    // just use the = assignment operator with new values as 
    // right hand expression while accessing the array element.
    int arr7[] = {2, 4, 8, 12, 16};
    int n = sizeof(arr7) / sizeof(arr7[0]);
    // Print original array
    for (int i = 0; i < n; i++) {
        cout << arr7[i] << " ";
    }
    cout << endl;
    // Update the first element
    arr7[0] = 90;
    cout << arr7[0] << endl;  // Output: 90
    // Print updated array
    for (int i = 0; i < n; i++) {
        cout << arr7[i] << " ";
    }
    cout << endl;
}