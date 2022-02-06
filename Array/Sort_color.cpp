https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        //dutch national flag 
        int l=0;
        int i=0;
        int h= nums.size()-1;
        while(i<=h & i<nums.size()){
            
            if(nums[i]==1){
                i++;
            }else if(nums[i]==0){
                swap(nums[i],nums[l]);
                l++;
                i++;
            }else if(nums[i]==2){
                swap(nums[i],nums[h]);
                h--;
            }
            
        }
        
    }
};