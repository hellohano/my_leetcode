# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @param sum, an integer
    # @return a boolean
    def hasPathSum(self, root, sum):
    	return self.dfs(root, sum, 0)


    def dfs(self, node, sum, current_sum):
    	if node == None:
    		return False;
    	if node.left == None and node.right == None:
    		return current_sum + node.val == sum
    	return self.dfs(node.left, sum, current_sum + node.val) or self.dfs(node.right, sum, current_sum + node.val)