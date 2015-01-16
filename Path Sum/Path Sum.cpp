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
    bool hasPathSum(TreeNode *root, int sum) {
        return dfs(root, sum, 0);
    }
    
    bool dfs(TreeNode *node, int sum, int currentSum){
        if (NULL == node){
            return false;
        }
        bool result1;
        bool result2;
        if (node->left == NULL && node->right == NULL){
            return sum == currentSum + node->val;
        }
        if (node->left != NULL){
            result1 = dfs(node->left, sum, currentSum + node->val);
        }
        if (node->right != NULL){
            result2 = dfs(node->right, sum, currentSum + node->val);
        }
        return result1 || result2;
        // return dfs(node->left, sum, currentSum + node->val) || dfs(node->right, sum, currentSum + node->val);
    }
};