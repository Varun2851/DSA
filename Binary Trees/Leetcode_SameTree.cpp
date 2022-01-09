// https://leetcode.com/problems/same-tree/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        //base case
        if(p == NULL && q == NULL){
            return true;
        }
        //check either of them is null or not
        if(p == NULL || q == NULL){
            return false;
        }
        //check root->val
        if(p->val != q->val){
            return false;
        }
        
        return isSameTree(p->right , q->right) && isSameTree(p->left , q->left);
    }
};