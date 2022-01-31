//https://leetcode.com/problems/richest-customer-wealth/

 // Example 1:

// Input: accounts = [[1,2,3],[3,2,1]]
// Output: 6
// Explanation:
// 1st customer has wealth = 1 + 2 + 3 = 6
// 2nd customer has wealth = 3 + 2 + 1 = 6
// Both customers are considered the richest with a wealth of 6 each, so return 6.

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        vector<int>ans;
        for(int i = 0; i<m; i++){
            int sum = 0;
            for(int j = 0; j<n; j++){
                sum += accounts[i][j];
            }
            ans.push_back(sum);
        }
        
        int  x = ans.size();
        int wealth = -1;
        for(int i = 0; i<x; i++){
            if(ans[i] > wealth){
                wealth = ans[i];
            }
        }
       
        return wealth;
    }
};