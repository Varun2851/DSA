//https://leetcode.com/problems/permutations/

class Solution {
public:
      vector<vector<int>>ans;
    void solve(vector<int>& nums, int i){
      
        //base case
        if(i == nums.size()){
            ans.push_back(nums);
            return ;
        }
        //recuursive case
        for(int j = i; j<nums.size(); j++){
            swap(nums[i] , nums[j]);
            solve(nums , i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums, 0);
        return ans;
    }
};