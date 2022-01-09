//https://leetcode.com/problems/symmetric-tree/

class Solution {
public:
    
     bool isMirror(TreeNode* root1, TreeNode* root2){
	// If both trees are empty, then they are mirror images
        if(!root1 && !root2)
            return true;
        
        if(root1 && root2 && root1->val == root2->val)
            return isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left);
			
		// if none of above conditions is true then root1 and root2 are not mirror images
        return false;
    }
    
	// Returns true if a tree is symmetric i.e. mirror image of itself
    bool isSymmetric(TreeNode* root) {
		// Check if tree is mirror of itself
        return isMirror(root, root);
    }
};