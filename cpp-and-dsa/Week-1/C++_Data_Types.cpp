// Data types specify the type of data that a variable can store. 
// Whenever a variable is defined in C++, the compiler allocates memory for that variable based 
// on the data type with which it is declared. Please note that every datatype may require a different amount of memory.

#include <iostream>
using namespace std;

int main() {

    // Creating a variable to store integer
    // int -> Integer
    int var = 10;

    cout << var << endl;

    /* 
        Explanation:
            In the above code, we needed to store the value 10 in our program,
            so we created a variable var. But before var, we have used the keyword 'int'. 
            This keyword is used to define that the variable var will store data of type integer.
    */

   /*
        The character data type is used to store a single character.
        The keyword used to define a character is char.
        Its size is 1 byte, and it stores characters enclosed in single quotes (' ').
        It can generally store upto 256 characters according to their ASCII codes.
   */

    // Character Variable
    char c = 'A';
    cout << c << endl;

    /*
        Integer data type denotes that the given variable can store the integer numbers.
        The Keyword used to define integers is int.
        Its size is 4-bytes (for 64-bit) systems and can store numbers for binary, octal and
        hexa decimal base systems in the range from -2,147,483,648 to 2,147,483,648.
    */

    // Creating an integer variable
    int x = 25;
    cout << x << endl;
    // Using hexadecimal base value
    x = 0x15;
    cout << x << endl;

    /*
        The boolean data type is used to store logical values: true(1) or false(0).
        The keyword used to define a boolean variable is bool.
        Its size is 1 byte.
    */

    // Creating a boolean variable
    bool isTrue = true;
    cout << isTrue << endl;
    bool isFalse = false;
    cout << isFalse << endl;

    /*
        Floating-point data type is used to store numbers with decimal points. 
        The keyword used to define floating-point numbers is float.
        Its size is 4 bytes (on 64-bit systems) 
        and can store values in the range from 1.2e-38 to 34e+38.
    */

    // Floating point variable with decimal value
    float f = 36.5;
    cout << f << endl;

    /*
        The double data type is used to store decimal numbers with higher precision.
        The keword used to define double-precision floating-point numbers is double.
        Its size is 8 byte (on 64-bit systems) and can store the values in 
        the range from -1.7e-308 to 1.7e-308
    */

    // double precision floating point variable
    double pi = 3.1415926535;
    cout << pi << endl;

    /*
        | Feature      | float      | double     |
        | ------------ | ---------- | ---------- |
        | Size         | 4 bytes    | 8 bytes    |
        | Precision    | Low        | High       |
        | Range        | Smaller    | Larger     |
        |              | 1.2e-38    | 1.2e-38    |
        |              | to 34e+38  | to 1.7e-308|
        | Default type | No         | Yes        |
        | Recommended  | Rare cases | Most cases |
    */

    /*
        The void data type represents the absence of value.
        We cannot create a variable of void type. 
        It is used for void pointer and functions that do not return any value
        using the keyword void.
        void display() {
            cout << "Hello";
        }
    */

    // Derieved Data Types
    /*
        Derived data types are formed using fundamental data types.
        There are 4 derived data types in C++:
            1. Array
            2. Pointer
            3. Reference
            4. Function
    */
    // Array
    /*
        An array stores multiple values of the same type in 
        contiguous memory locations.
    */
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[0] << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Pointer
    /*
        A pointer stores the memory address of another variable.
    */
    int l = 10;
    int* ptr = &l;
    cout << "Value of l: " << l << endl; // Value of l: 10
    cout << "Address of l: " << &l << endl; // Address of l: 0x7ffee3b8c9ac (example address)
    cout << "Value of ptr: " << ptr << endl; // Value of ptr: 0x7ffee3b8c9ac (example address)
    cout << "Value pointed by ptr: " << *ptr << endl; // Value pointed by ptr: 10

    // Reference
    /*
        A reference acts as an alias for an existing variable.
    */
    int k = 10;
    int & ref = k;
    cout << "Value of k: " << k << endl; // Value of k: 10
    cout << "Value of ref: " << ref << endl; // Value of ref: 10

    // Function Type
    /*
        Functions also represent a derived type 
        because they have a specific return type and parameter types.
        int add(int a, int b) {
            return a + b;
        }
    */
   
    /*
        C++ is a strongly typed languange. It means that all variables' data type should be specified at the declaration,
        and it does not change throughout the program. Moreover, we can only assign the values that are of the same type as
        that of the variable.
        If we try to assign floating point value to a boolean variable, it may result in data corruption, runtime errors
        or undefined behaviour.
    */

    // Assigning float value to isTrue
    // bool a = 10.28f;
    // cout << a << endl; 
    /*
        Error:
            Data_Types.cpp:105:14: warning: implicit conversion from 'float' to 'bool' changes value from 10.28 to true [-Wliteral-conversion]
            105 |     bool a = 10.28f;
                |          ~   ^~~~~~
            1 warning generated.
    */

    /*
        Type conversion refers to the process of changing one data type into another compatible one without losing its
        original meaning.
    */

    int n = 3;
    char c1 = 'C';

    // Convert char data type into integer
    cout << (int)c1 << endl;

    int sum = n + c1;
    cout << sum << endl;

    /*
        The size of C++ data types can vary across different systems, depending on the architecture of computer and the
        compiler beign used. But if the architecture of the computer is same, then the size across 
        different computers remains same.
        We can find the size of the data type using sizeof() operator. According to this type, the range of values that a
        variable of given data types can store are decided.
    */

    // Printing the size of each data type
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    /*
        Data type modifiers are the keywords used to change or give extra meaning to already existing data types.
        It is added to primitive data types as a prefix to modify their size or range of data type they can store.
        There are 4 type modifiers in C++:
            1. short
            2. long
            3. signed
            4. unsigned
    */

    // For example, definign an int with ong type modifier will change its size to 8 bytes:

    int var1; // 4 bytes
    long int var2; // 8 bytes
    
    cout << "Size of int var1: " << sizeof(var1) << " bytes" << endl;
    cout << "Size of long int var2: " << sizeof(var2) << " bytes" << endl;
    
    return 0;
}