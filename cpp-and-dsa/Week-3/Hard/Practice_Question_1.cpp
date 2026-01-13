/*
    Problem Statement:
        Given an array nums of n integers, 
        return an array of all the unique 
        quadruplets [nums[a], nums[b], nums[c], nums[d]] 
        such that:
            0 <= a, b, c, d < n
            a, b, c, and d are distinct.
            nums[a] + nums[b] + nums[c] + nums[d] == target

    Examples:
        Input: nums = [1,0,-1,0,-2,2], target = 0
        Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

        Input: nums = [2,2,2,2,2], target = 8
        Output: [[2,2,2,2]]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        for(int j = i + 1; j < n; j++){
            if(j > i + 1 && nums[j] == nums[j - 1]) continue;
            long long t = (long long)target - nums[i] - nums[j];
            int l = j + 1, r = n - 1;
            while(l < r){
                long long sum = nums[l] + nums[r];
                if(sum == t){
                    res.push_back({nums[i], nums[j], nums[l], nums[r]});
                    while(l < r && nums[l] == nums[l + 1]) l++;
                    while(l < r && nums[r] == nums[r - 1]) r--;
                    l++; r--;
                } else if(sum < t) l++;
                else r--;
            }
        }
    }
    return res;
}

int main(){
    int n, target; cin >> n >> target;
    vector<int> nums(n);
    for(int &x : nums) cin >> x;
    auto ans = fourSum(nums, target);
    if(ans.empty()) cout << "No solution found\n";
    else for(auto &v : ans) cout << "["<<v[0]<<", "<<v[1]<<", "<<v[2]<<", "<<v[3]<<"]\n";
}