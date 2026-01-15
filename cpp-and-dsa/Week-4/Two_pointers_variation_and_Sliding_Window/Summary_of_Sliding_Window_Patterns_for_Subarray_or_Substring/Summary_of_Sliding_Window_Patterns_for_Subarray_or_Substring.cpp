// Summary of Sliding Window Patterns for Subarray/Substring
/*
    The sliding window technique is an 
    algorithmic optimization method used for 
    solving problems that involve contiguous 
    subarrays or substrings.
    This technique invloves maintaing a "Window" 
    (a range of elements) that slides across the data structure, 
    typically an array or a string. Instead of 
    recalculating a value for a value for every possible subarray
    from stractch, the sliding window reuses past computations by
    increamentally updating the results as the window moves.
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    // Idea/Intuition
    /*
        We have a "window" of 2 pointers, 
        left and right, and we keep increasing the right pointer.
        1. If the element at the right pointer makes 
        the window not valid, 
        we keep moving the left pointer 
        to shrink the window until it becomes valid again.
        2. Then, we update the global min/max 
        with the result from the valid window.
        3. To check if it is valid, 
        we need to store the "state" of the window 
        (ex. frequency of letters, number of distinct integers).
    */
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int K;
    cout << "Enter K (max distinct allowed): ";
    cin >> K;
    int left = 0;
    unordered_map<int, int> freq;
    int distinctCount = 0;
    int bestLen = 0;
    for (int right = 0; right < n; right++) {
        // expand window
        if (freq[arr[right]] == 0) {
            distinctCount++;
        }
        freq[arr[right]]++;
        // shrink until valid
        while (distinctCount > K) {
            freq[arr[left]]--;
            if (freq[arr[left]] == 0) {
                distinctCount--;
            }
            left++;
        }
        // window is valid
        bestLen = max(bestLen, right - left + 1);
    }
    cout << "Maximum length with at most " << K 
         << " distinct integers = " << bestLen << endl;
    return 0;
}