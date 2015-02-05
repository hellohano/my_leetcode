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
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int>> vs;
        queue<TreeNode *> current, next;
        if (root == NULL)
        	return vs;
        current.push(root);
        vector<int> v;
        while (!current.empty()){
        	TreeNode *t = current.front();
        	current.pop();

        	v.push_back(t->val);

        	if(t->left){
        		next.push(t->left);
        	}
        	if(t->right){
        		next.push(t->right);
        	}

        	if(current.empty()){
        		vs.push_back(v);
        		swap(current, next);
        		v.clear();
        	}
        }
        return vs;
    }
};