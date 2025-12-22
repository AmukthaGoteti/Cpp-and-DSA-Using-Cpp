/* 
    In C++, data is read and written using streams, which are sequences of bytes.
    Input Stream: Data flows from device (like the keyboard) to the computer's memory.
    Output Stream: Data flows from memory to an output device (like screen).
    These streams are defined in the <iostream> header file
    The most common stream objects are - cin: for taking input, cout: for displaying output
*/

// cout is an instance of the ostream class used to display on the screen.
// Data is sent out using the insertion operator <<.
// cin is an instance of the istram class used to read input from the keyboard. The extraction operator >> 
// is used to with cin to get data from the input stream and store it in a variable.

#include <iostream>
using namespace std;

int main() {
    int age;

    // Taking input from user and store it in variable.
    cout << "Enter a age: ";
    cin >> age;
    
    // Output the entered age
    cout << "Age entered: " << age << endl;

    // Priting the given text using cout
    cout << "GeeksforGeeks" << endl;

    /*
        cerr is the standard error stream used to display error messages. It is an instance of the ostream class.
        cerr displays messages immediately, without waiting (Unbuffered output)
        Useful for showing errors or warnings separately from normal program output (cout).
        Unlike cout, which may delay output due to buffering, cerr ensures errors are seen instantly.
        Note: The main difference between cerr and cout comes when you would like to redirect output using "cout" 
        that gets redirected to file if you use "cerr" the error doesn't get stored in file.(This is what un-buffered 
        means ..It cant store the message)
    */

    cerr << "An Error has occured\n";

    /*
        clog is the standard logging stream used to display error or log messages. 
        It is an instance of the ostream class, like cerr.
        Messages are first stored in a buffer and displayed only when the buffer is full or 
        explicitly flushed using flush() (Buffered output)
        Useful for logging messages that don’t need to appear immediately on the screen.
        Unlike cerr, output from clog may be delayed due to buffering.
    */

    clog << "An error occured\n";

    return 0;
}