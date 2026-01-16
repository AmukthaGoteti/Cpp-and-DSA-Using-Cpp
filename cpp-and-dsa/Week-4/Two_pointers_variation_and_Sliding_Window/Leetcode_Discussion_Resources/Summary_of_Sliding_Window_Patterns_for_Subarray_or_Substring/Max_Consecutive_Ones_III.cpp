/*
    Problem Statement:
        Given a binary array nums and an integer k, 
        return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
    
    Examples:
        Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
        Output: 6
        Explanation: [1,1,1,0,0,1,1,1,1,1,1]
                    Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
        

        Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
        Output: 10
        Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
        Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
*/

#include <iostream>
#include <vector>
using namespace std;

int longestOnes(vector<int>& A, int K) {
    vector<int> freq(2, 0);
    int i = 0, r = 0;
    for(int j = 0; j < (int)A.size(); j++){
        freq[A[j]]++;
        while(freq[0] > K && i <= j){
            freq[A[i]]--;
            i++;
        }
        r = max(r, j - i + 1);
    }
    return r;
}

int main() {
    int n, K;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter binary elements (0 or 1): ";
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    cout << "Enter K (maximum zeros you can flip): ";
    cin >> K;
    int result = longestOnes(A, K);
    cout << "Longest subarray length with at most " << K << " zero flips: " << result << endl;
    return 0;
}