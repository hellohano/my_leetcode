/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode *root) {
    	if(!root){
    		return true;
    	}
    	isLeftEqualsRight(root->left, root->right);
    }

    bool isLeftEqualsRight(TreeNode *left, TreeNode *right){
    	if (!left && !right){
    		return true;
    	}
    	if (!left || !right){
    		return false;
    	}
    	if (left->val == right->val){
    		bool isLeftEqual = isLeftEqualsRight(left->left, right->right);
    		bool isRightEqual = isLeftEqualsRight(left->right, right->left);
    		return isLeftEqual && isRightEqual;
    	}
    	return false;
    }
};