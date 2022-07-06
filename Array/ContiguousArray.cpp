//https://leetcode.com/problems/contiguous-array/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {

    	int n = nums.size();

    	//1.Create a Hashmap
    	unordered_map<int,int>mp;
    	//2.Change all zero to -1

    	for(int i  = 0; i<n; i++){
    		if(nums[i] == 0){
    			nums[i] = -1;
    		}
    	} 
    	//3.now we have modified array
    	int sum = 0;
    	int maxlen = 0;
    	//4.Iterate over the array
    	for(int i = 0; i<n; i++){
    		sum += nums[i];

    		if(sum == 0){
    			maxlen = max(maxlen,i+1);
    		}
    		if(mp.find(sum) != mp.end()){
    			maxlen = max(maxlen , i-mp[sum]);
    		}
    		else{
    			mp[sum] = i;
    		}
    	}
    	return maxlen;
    }
};