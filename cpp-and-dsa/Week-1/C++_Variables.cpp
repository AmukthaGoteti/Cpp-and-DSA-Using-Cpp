/* 
    In C++, variable is a name given to a memory location
    It is the basic unit of storage in a program.
    The value stored in a variable can be accessed or changed during program execution.
*/

#include <iostream>
using namespace std;

int main() {
    // Creating a single character
    int num = 3;

    // Accessing and printing above variable
    cout << num << endl;

    // Update the value
    num = 7;

    // Printing the updated value
    cout << num << endl;

    // Creating a variable and giving it a name is called variable defination (sometimes called variable declaration).
    // The syntax of variable defication is:
    // type name;
    // Where type is the type of data that a variable can store, and name is the name assigned to the variable.
    // Multiple variables of the same type can be defined as:
    // type name1, name2, name3, ....;
    // The data type of a variable is slected from the list of data types supported by C++
    // To store number without decimal point, we use integer data type.

    int num1;

    // Here int is the keyword used to tell the compiler that the variable with name num will store integer values.

    // A variable that is just defined may not contain some valid value.
    // We have to intialize it to some valid intial value.
    // It is done by using assignment operator =
    int num2;
    num2 = 3;

    // Defination and Intialization can be done in single step;
    int num3 = 3;

    // The integer variable num is initialised with the value 3.
    // Values are generally the literals of the same type.
    // Note: The Value we assign should be of the same type as the variable.

    // The main objective of variable is store the data so that it can be retrived or update any time.
    // Accessing can be done by simply using its assigned name and updating the value using = assignment operator.

    int num4 = 3;
    // Accessing and printing above variables
    cout << num4 << endl;

    // Update the value
    num4 = 7;
    cout << num4 << endl;

    /*
        The names given to a variable are called identifiers. There are some rules for creating these identifiers (names):
            1. A name can only contain letters (A-Z or a-z), digits (0-9), and underscores (_).
            2. It should start with a letter or an underscore only.
            3. It is case sensitive.
            4. The name of the variable should not contain any whitespace and special characters (i.e. #, $, %, *, etc).
            5. We cannot use C++ keyword (e.g. float, double, class) as a variable name.
    */

    // Variables are the names given to the memory location which stores some values.
    // These names can be used in any place where the value it stores can be used.
    // We assign values of the same type of variables.
    // But instead of these values, we can also use variables that store these values.

    int num5 = 10, num6;

    // Assigning num5's value to num6
    num6 = num5;
    cout << num5 << " " << num6 << endl;

    // Addition of two integers can be done in C++ using + operator
    cout << 10 + 20 << endl;

    // We can do the above operation using the variabls that store these two values
    int num7 = 10, num8 = 20;
    cout << num7 + num8 << endl;

    // In C++, a constant variable is one whose value cannot be changed after it is initialized.
    // This is done using the const keyword
    const int num9 = 10;
    cout << num9 << endl;

    /*
        Scope of variable is the region inside the program where the variable can be referred to by using its name.
        Basically, it is the part of the program where the variable exists.
    */

    // When we create or declare a variable, a fixed-size memory block is assigned to the variable, and its initial value is a garbage value.
    // Initialization assigns a meaningful value using the assignment operator.
    // Variables essentially manipulate specific memory locations, and their stored data is accessed via their names.
    
    return 0;
}