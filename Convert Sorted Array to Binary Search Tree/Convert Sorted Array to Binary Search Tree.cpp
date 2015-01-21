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
    TreeNode *sortedArrayToBST(vector<int> &num) {
        createTree(num, 0, num.size()-1);
    }

    TreeNode *createTree(vector<int> &num, int left, int right){
    	if (left > right){
    		return NULL;
    	}
    	int mid = (left + right)/2;
    	TreeNode *left_node = createTree(num, left, mid - 1);
    	TreeNode *right_node = createTree(num, mid + 1, right);
    	TreeNode *node = new TreeNode(num[mid]);
    	node->left = left_node;
    	node->right = right_node;
    	return node;
    }
};