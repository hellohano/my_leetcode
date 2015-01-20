# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return an integer
    def sumNumbers(self, root):
    	if root is None:
    		return 0
    	return self.sumNum(root, 0)

    def sumNum(self, root, current_sum):
    	current_sum = int(current_sum) * 10 + root.val
    	if root.left is None and root.right is None:
    		return current_sum
    	left_child_sum = 0
    	right_child_sum = 0
    	if root.left is not None:
    		left_child_sum = self.sumNum(root.left, current_sum)
    	if root.right is not None:
    		right_child_sum = self.sumNum(root.right, current_sum)
    	return left_child_sum + right_child_sum