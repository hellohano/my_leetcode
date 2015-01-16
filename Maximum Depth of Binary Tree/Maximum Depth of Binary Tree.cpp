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
    int maxDepth(TreeNode *root) {
    	if(!root){
    		return 0;
    	}
		return calculateMaxDepth(root, 0, 0);	    
    }

    int calculateMaxDepth(TreeNode *node, int currentDepth, int currentMaxDepth){
    	if (!node){
    		return currentMaxDepth;
    	}
    	currentDepth++;
    	if(node->left == NULL && node->right == NULL){
    		if (currentDepth >= currentMaxDepth){
    			currentMaxDepth = currentDepth;
    		}
    		return currentMaxDepth;
    	}
    	int result1 = calculateMaxDepth(node->left, currentDepth, currentMaxDepth);
    	int result2 = calculateMaxDepth(node->right, currentDepth, currentMaxDepth);
    	if (result1 >= result2){
    		return result1;
    	} else {
    		return result2;
    	}
    }
};