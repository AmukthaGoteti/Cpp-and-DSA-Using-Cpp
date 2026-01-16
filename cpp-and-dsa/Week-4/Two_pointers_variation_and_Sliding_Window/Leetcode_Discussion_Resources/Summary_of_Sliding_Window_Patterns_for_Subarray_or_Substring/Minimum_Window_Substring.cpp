/*
    Idea of the Problem Statement:
        We track how many required characters from t are still missing in the current window, 
        and when that count reaches zero, the window contains all of t.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter a size for the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array (space separated): ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m;
    cout << "Enter the size of t: ";
    cin >> m;
    vector<int> t(m);
    cout << "Enter the elements of t (space separated): ";
    for(int i = 0; i < m; i++) {
        cin >> t[i];
    }
    // Build frequency map for required elements
    unordered_map<int,int> need;
    for(int x : t) need[x]++;
    int remain = m;         // how many required elements still missing
    int left = 0;
    int minLen = 1e9;
    int startIdx = -1;
    // Sliding window
    for(int right = 0; right < n; right++) {
        if(need.count(arr[right])) {
            if(need[arr[right]] > 0) remain--;
            need[arr[right]]--;
        }
        while(remain == 0) { // window satisfies all of t
            if(right - left + 1 < minLen) {
                minLen = right - left + 1;
                startIdx = left;
            }
            if(need.count(arr[left])) {
                need[arr[left]]++;
                if(need[arr[left]] > 0) remain++;
            }
            left++;
        }
    }
    if(startIdx == -1) {
        cout << "No valid window found.\n";
    } else {
        cout << "Smallest window that contains all elements of t: ";
        for(int i = startIdx; i < startIdx + minLen; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}