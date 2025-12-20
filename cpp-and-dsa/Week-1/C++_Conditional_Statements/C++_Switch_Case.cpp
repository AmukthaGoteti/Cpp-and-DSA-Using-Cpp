// In C++, a switch statement checks a value and runs the matching block of code, using break to stop 
// and default if no case matches
#include <iostream>
using namespace std;
int main() {
    // Variable to the used as switch expression
    char x = 'A';
    // Switch expression
    switch (x) {
        // Case Statements
        case'A':
            cout << "A" << endl;
            break;
        case'B':
            cout << "B" << endl;
            break;
        default:
            cout << "Not A or B" << endl;
            break;
    }
    return 0;
}