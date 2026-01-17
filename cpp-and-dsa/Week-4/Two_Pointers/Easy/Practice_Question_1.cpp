/*
    Problem Statement:
        Go through the sorted array, keep one of each number, skip duplicates, 
        and return how many unique numbers you kept.

    Examples:
        Input: nums = [1,1,2]
        Output: 2, nums = [1,2,_]
        Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
                     It does not matter what you leave beyond the returned k (hence they are underscores).
        
        Input: nums = [0,0,1,1,1,2,2,3,3,4]
        Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
        Explanation: Your function should return k = 5, with the first five elements of nums 
                     being 0, 1, 2, 3, and 4 respectively.
                     It does not matter what you leave beyond the returned k (hence they are underscores).
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the Elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    // Remove duplicates
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    cout << "After removing duplicates: ";
    for(int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    // Fix count: count actual size after duplicate removal
    int count = nums.size();
    cout << "Count = " << count << endl;
    return 0;
}