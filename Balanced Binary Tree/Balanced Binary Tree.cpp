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
    bool isBalanced(TreeNode *root) {
        if (!root){
        	return true;
        }
        bool isLeftBalanced = isBalanced(root->left);
        bool isRightBalanced = isBalanced(root->right);
        if(isLeftBalanced && isRightBalanced){
        	int leftHeight = calculateTreeHeight(root->left);
        	int rightHeight = calculateTreeHeight(root->right);
        	if(abs(leftHeight - rightHeight) <= 1){
        		return true;
        	}
        }
        return false;
    }

    int calculateTreeHeight(TreeNode *node){
    	if (node == NULL){
    		return 0;
    	}
    	int leftHeight = calculateTreeHeight(node->left);
    	int rightHeight = calculateTreeHeight(node->right);
    	if (leftHeight >= rightHeight){
    		return 1 + leftHeight;
    	} else {
    		return 1 + rightHeight;
    	}
    }
};