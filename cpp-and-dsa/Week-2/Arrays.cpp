// An Array is a collection of elements of same type placed in contiguous memory locations.
// It allows you to store multiple values under a single name and access them using an index.

#include <iostream>
using namespace std;

void printArray(int arr13[], int n3) {
        for (int i = 0; i < n3; i ++) {
            cout << arr13[i] << " ";
        }
        cout << endl;
}

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

    // Traversing means going through each element of an array one by one. 
    // An array is easy to traverse because we can use a loop that 
    // starts from index 0 and goes up to the last element. 
    // Using the loop index, we can access and work with each element in order.
    int arr8[5] = {2, 4, 8, 12, 16};
    // Traversing and printing arr8
    for (int i = 0; i < 5; i++) {
        cout << arr8[i] << " ";
    }
    cout << endl;

    // (or)
    int arr9[] = {2, 4, 8, 12, 16};
    int n1 = sizeof(arr9) / sizeof(arr9[0]);
    for( int i = 0; i < n1; i++) {
        cout << arr9[i] << " ";
    }
    cout << endl;

    // The size of the array refers to the number of elements that can be stored in the array.
    // The array does not contain the information about its size but we can extract the size using sizeof() operator.
    int arr10[] = {2, 4, 8, 12, 16};
    cout << "Size of arr[0]: " << sizeof(arr[0]) << endl;
    cout << "Size of arr10: " << sizeof(arr10)<< endl;
    int n2 = sizeof(arr10) / sizeof(arr10[0]);
    cout << "Number of elements in arr10: " << n2 << endl;

    // In C++, arrays and pointers are closely related to each other. The array name can be treated as a constant pointer that stored the memory address of the first element of the array.
    int arr11[5];
    cout << arr11 << endl;
    cout << &arr11[0] << endl;

    // Internally, arrays operators are performed using pointer arithmetic.
    // So, we can do almost any array operation using 
    // by using pointer to the first element.
    int arr12[] = {2, 4, 8, 12, 16};
    int* ptr = arr12;
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    // Arrays are passed to functions using pointers, as the array name 
    // decays to a pointer to the first element.
    // So, we also need to pass the size of the array to the function.
    int arr13[] = {2, 4, 8, 12, 16};
    int n3 = sizeof(arr13) / sizeof(arr13[0]);
    printArray(arr13, n3);

    // Arrays declared with more than one dimension are called multidimensional arrays.
    // Syntax data_type array_name [size1][size2]...
    // Two-Dimensional Array: It is an array that has exactly two dimensions. It can be visualized in the form of rows and columns organized in a two-dimensional plane.
    // Three-Dimensional Array: A 3D array has exactly three dimensions. It can be visualized as a collection of 2D arrays stacked on top of each other to create the third dimension.
    int arr14[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr14[i][j] << " ";
        }
        cout << endl;
    }

    int arr15[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << arr15[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;

    /*
        Properties of Arrays
            An array is a collection of data of the same data type, stored at a contiguous memory location.
            Indexing of an array starts from 0. It means the first element is stored at the 0th index, the second at 1st, and so on.
            Elements of an array can be accessed using their indices.
            Once an array is declared its size remains constant throughout the program.
            An array can have multiple dimensions.
            The size of the array in bytes can be determined by the sizeof operator using which we can also find the number of elements in the array.
            We can find the size of the type of elements stored in an array by subtracting adjacent addresses.
    */
}