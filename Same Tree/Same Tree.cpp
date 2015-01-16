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

    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (!p && !q) {
    		return true;
    	}
    	if (!p || !q) {
    		return false;
    	}
    	return (p->val == q->val)&&isSameTree(p->left, q->left)&&isSameTree(p->right, q->right);
    }

    bool isSameTree2(TreeNode *p, TreeNode *q){
    	if (!p && !q) {
    		return true;
    	}
    	if (!p || !q) {
    		return false;
    	}
    	queue<TreeNode *node> q1;
    	queue<TreeNode *node> q2;
    	q1.push(p);
    	q2.push(q);
    	while(q1.size() > 0 && q2.size() > 0){
    		TreeNode *pNode = q1.front();
    		TreeNode *qNode = q2.front();
    		q1.pop();
    		q2.pop();
    		if (!pNode && !qNode){
    			continue;
    		}
    		if (!pNode || !qNode){
    			return false;
    		}
    		if(qNode->val != qNode->val){
    			return false;
    		}
    		q1.push(pNode->left);
    		q2.push(qNode->left);

    		q1.push(pNode->right);
    		q2.push(qNode->right);
    	}
    	return true;	
    }
};