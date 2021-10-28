//Search in Rotated Sorted Array II
//Input: nums = [2,5,6,0,0,1,2], target = 0
//Output: true

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s <= e){
            int mid = (s+e)/2;
            
            if(nums[mid] == target){
                return true;
            }
            if(nums[s] < nums[mid]){
                if(target < nums[s] or target > nums[mid]){
                     s = mid+1;
                }
                else{
                    e = mid-1;
                }
            }
            else if(nums[s] > nums[mid]){
                if(target < nums[mid] or target > nums[e]){
                    e = mid-1;
                }
                else{
                    s = mid+1;
                }
            }
            else{
                 s++;
            }
            
        }
        return false;
    }
};