class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans  = 0;

        //1.Sort the given vector
        sort(nums.begin(),nums.end());
        
        //2. iterate from back till i>=2 because we have to find triplet
        for(int i = n-1; i>=2; i--){
            int low = 0;
            int high = i-1; // high pointer will change acc to i
            //3.Two pointer approach
            while(low<high){
                //4.Check for the condition a+b>c
                if(nums[low]+nums[high] > nums[i]){
                    ans += (high-low);
                    high--;
                }
                else{
                    low++;
                }
            }
        }
        return ans;

    }
};