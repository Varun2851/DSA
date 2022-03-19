
//https://leetcode.com/problems/non-decreasing-array/
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0; //to store the count of modification
        int n = nums.size();
        if(nums[0]>nums[1]){
            nums[0] = nums[1]/2;
            count++;
        }
        //now run the loop from 2nd ele to 2nd last ele
        for(int i = 1; i<nums.size()-1; i++){
            if(nums[i] < nums[i-1] and nums[i] < nums[i+1] or nums[i] > nums[i+1] and nums[i] > nums[i-1]){
                nums[i] = (nums[i-1]+nums[i+1])/2;
                count++;
            }
            if(nums[i] == nums[i+1] or nums[i] == nums[i-1]){
                return false;
            }
        }
        //check weather the last element needs to be modified
        if(arr[n-1] < arr[n-2]){
            count++;
        }
        if(count > 1){
            return false;
        }
        return true;
    }
};