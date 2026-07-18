# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return True
        if not self.isAllLess(root.left, root.val):
            return False
        if not self.isAllMore(root.right, root.val):
            return False
        return self.isValidBST(root.left) and self.isValidBST(root.right)

    def isAllLess(self, node, bound):
        if not node:
            return True
        if node.val >= bound:
            return False
        return self.isAllLess(node.left, bound) and self.isAllLess(node.right, bound)

    def isAllMore(self, node, bound):
        if not node:
            return True
        if node.val <= bound:
            return False
        return self.isAllMore(node.left, bound) and self.isAllMore(node.right, bound)