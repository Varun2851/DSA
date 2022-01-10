//https://leetcode.com/problems/construct-string-from-binary-tree/

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
    void treeStr(TreeNode*root , string &ans){
        //base case
        if(root == NULL){
            return;
        }
        //push the root data as character
        
        ans += to_string(root->val);
        
        if(!root->left and !root->right){
            return;
        }
        
        //for left subtree
        ans.push_back('(');
        treeStr(root->left , ans);
        ans.push_back(')');
        
        //only if right child is present
        if(root->right){
            ans.push_back('(');
            treeStr(root->right , ans);
            ans.push_back(')');
        }
    }
    string tree2str(TreeNode* root) {
        string ans = "";
        treeStr(root , ans);
        return ans;
    }
};