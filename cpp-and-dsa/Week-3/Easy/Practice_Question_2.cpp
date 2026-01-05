/*
    Problem Statement:
        Given an array arr[] of size n, 
        the task is to find all the Leaders in the array. 
        An element is a Leader if it is greater than or equal to 
        all the elements to its right side.
        Note: The rightmost element is always a leader.
    Examples:
        Input: arr[] = [16, 17, 4, 3, 5, 2]
        Output: [17 5 2]
        Explanation: 17 is greater than all the elements to its 
                    right i.e., [4, 3, 5, 2], 
                    therefore 17 is a leader. 
                    5 is greater than all the elements to its right 
                    i.e., [2], therefore 5 is a leader. 
                    2 has no element to its right, 
                    therefore 2 is a leader.
        Input: arr[] = [1, 2, 3, 4, 5, 2]
        Output: [5 2]
        Explanation: 5 is greater than all the elements to 
                    its right i.e., [2], therefore 5 is a leader. 
                    2 has no element to its right, therefore 2 is a leader.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int j;
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                break;
            }
        }
        if (j == n) {
            res.push_back(arr[i]);
        }
    }
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(arr);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}