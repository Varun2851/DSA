//https://leetcode.com/submissions/detail/786474715/
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        int n = nums.size();
        int m = queries.size();
        sort(nums.begin(),nums.end());
        vector<int>ans(m);
        
        for(int i = 0; i<m; i++){
            int j = 0;
            int sum = 0;
            int size = 0;
            
            while(j<n){
                sum += nums[j];
                
                if(sum <= queries[i]){
                    size++;
                    j++;
                }
                else{
                    break;
                }
            }
            ans[i] = size;
        }
        return ans;
    }
};