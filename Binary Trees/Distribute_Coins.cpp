//https://leetcode.com/problems/distribute-coins-in-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int total_moves = 0;
    
    int solve(TreeNode*root){
        // base case
        if(!root){
            return 0;
        }
        
        //recursive case
        int left = solve(root->left);
        int right = solve(root->right);
        
        total_moves += abs(left) + abs(right);
        return  root->val + left + right -1;
    }
    int distributeCoins(TreeNode* root) {
        solve(root);
        return total_moves;
    }
};