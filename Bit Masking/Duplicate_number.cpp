//287. Find the Duplicate Number(leetcode Problem)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return nums[i];
            }
        }
        return -1;
    }
};

//Approach 2

int findDuplicate(vector<int>&nums){
	unordered_set<int>seen;
	for(auto x: nums){
		if(seen.count(x)){
			return x;
		}
		seen.insert(x);
	}
	return -1;
}