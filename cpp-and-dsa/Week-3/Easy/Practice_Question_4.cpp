/*
    Problem Statement:
        Reverse an array arr[]. 
        Reversing an array means rearranging 
        the elements such that the first element 
        becomes the last, the second element 
        becomes second last and so on.
    Examples:
        Input: arr[] = [1, 4, 3, 2, 6, 5]  
        Output:  [5, 6, 2, 3, 4, 1]
        Explanation: The first element 1 
                    moves to last position, 
                    the second element 
                    4 moves to second-last and so on.
        
        Input: arr[] = [4, 5, 1, 2]
        Output: [2, 1, 5, 4]
        Explanation: The first element 4 moves to 
                    last position, 
                    the second element 5 moves to 
                    second last and so on.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(vector<int> &arr) {
    reverse(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };
    reverseArray(arr);
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}