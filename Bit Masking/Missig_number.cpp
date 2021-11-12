//268. Missing Number(leetcode Problem)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        int i = 0;
        for(int x : nums){
            result = result^x;
            result = result^i;
            i++;
        }
        return result;
    }
};