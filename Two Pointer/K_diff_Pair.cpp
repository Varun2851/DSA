//https://leetcode.com/problems/k-diff-pairs-in-an-array/
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
    	int n = nums.size();
    	//we will use Two pointer aproach
    	//1.Sort the Vector 
    	sort(nums.begin() , nums.end());

    	//2.Mark to pointer i and j
    	int i = 0; int j = 1;
    	//3.Varibale to store ans
    	int ans = 0;

    	while(i < nums.size() and j < nums.size()){
    		//Conditions
    		if(nums[j]-nums[i] == k){
    			ans++;
    			i++;
    			j++;

    			//skip the duplicate element
    		    while(j<nums.size() and nums[j] == nums[j-1]){
    			j++;
    		    }
    		}
    		

    		else if(nums[j] - nums[i] > k){
    			i++;
    		}
    		else{
    			j++;
    		}
    	}
    	return ans;
    }
};