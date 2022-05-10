// You are given an array of n pairs pairs where pairs[i] = [lefti, righti] and lefti < righti.

// A pair p2 = [c, d] follows a pair p1 = [a, b] if b < c. A chain of pairs can be formed in this fashion.

// Return the length longest chain which can be formed.

// You do not need to use up all the given intervals. You can select pairs in any order.

// Input: pairs = [[1,2],[2,3],[3,4]]
// Output: 2
// Explanation: The longest chain is [1,2] -> [3,4].

class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        if(!pairs.size()) return 0;
        sort(pairs.begin(), pairs.end());
		// LIS array initialized as 1. As, every element is itself an answer
        vector<int> lis(pairs.size(), 1);
        int longestChainNum = 1;
		// Finding LIS in [0-----j]i for each 'i'
        for(int i=1;i<pairs.size();i++){
            for(int j=0;j<i;j++){
				// Condition similar to LIS
                if(pairs[j][1] < pairs[i][0]){
                    lis[i] = max(lis[i],lis[j]+1);
					// Updating maximum
                    longestChainNum = max(longestChainNum, lis[i]);
                }
            }
        }
        return longestChainNum;
    }
};