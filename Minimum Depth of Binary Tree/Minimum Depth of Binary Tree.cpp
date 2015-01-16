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
    int minDepth(TreeNode *root) {
        if(!root){
    		return 0;
    	}
		return calculateMinDepth(root, 0, 65535);	    
    }

    int calculateMinDepth(TreeNode *node, int currentDepth, int currentMinDepth){
    	if (!node){
    		return currentMinDepth;
    	}
    	currentDepth++;
    	if(node->left == NULL && node->right == NULL){
    		if (currentDepth <= currentMinDepth){
    			currentMinDepth = currentDepth;
    		}
    		return currentMinDepth;
    	}
    	int result1 = calculateMinDepth(node->left, currentDepth, currentMinDepth);
    	int result2 = calculateMinDepth(node->right, currentDepth, currentMinDepth);
    	if (result1 >= result2){
    		return result2;
    	} else {
    		return result1;
    	}
    }
};