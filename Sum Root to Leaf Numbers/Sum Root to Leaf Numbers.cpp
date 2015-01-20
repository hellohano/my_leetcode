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
    int sumNumbers(TreeNode *root) {
        if(!root){
        	return 0;
        }
        return calSumBers(root, 0);
    }

    int calSumBers(TreeNode *node, int sum){
    	sum = sum * 10 + node->val;
    	if(node->left == NULL && node->right == NULL){
    		return sum;
    	}
    	int leftSum, rightSum;
    	if(node->left){
    		leftSum = calSumBers(node->left, sum);
    	}
    	if(node->right){
    		rightSum = calSumBers(node->right, sum);
    	}
    	return leftSum + rightSum;
    }
};