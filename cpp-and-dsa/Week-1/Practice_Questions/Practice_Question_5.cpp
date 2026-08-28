/*
    Problem:
        You have to declare 4 variables of a, b, c, d of int, float, double, long long datatype respectively in the main function. 
        Note: 
            These variables are checked with its type in the main function, you don't need to change that. 
            You get a Correct Answer/verified verdict if you have declare these variables correctly 
            in its right place in the code.
    
    Examples :
        Input: None
        Output: Verified
        Explanation: All 4 variables are declared with proper data type.
*/

#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    // Declare the variables here
    int a;
    float b;
    double c;
    long long d;
    // Variables declaration checking
    if((typeid(a) == typeid(int)) and 
    (typeid(b) == typeid(float)) and 
    (typeid(c) == typeid(double)) and 
    (typeid(d) == typeid(long long))) 
    {
        cout << "Verified\n";
    }
}