/*
    Problem Statement:
        You are given an integer array height of length n. 
        There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
        Find two lines that together with the x-axis form a container, such that the container contains the most water.
        Return the maximum amount of water a container can store.
        Notice that you may not slant the container.
    
    Examples:
        Input: height = [1,8,6,2,5,4,8,3,7]
        Output: 49
        Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. 
                     In this case, the max area of water (blue section) the container can contain is 49.
        
        Input: height = [1,1]
        Output: 1
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    vector<int> height(n);
    cout << "Enter the heights of the lines: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int left = 0;
    int right = n - 1;
    int maxArea = 0;

    while (left < right) {
        int width = right - left;
        int currentHeight = min(height[left], height[right]);
        int currentArea = width * currentHeight;
        maxArea = max(maxArea, currentArea);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    cout << "The maximum amount of water the container can store is: " << maxArea << endl;
    return 0;
}