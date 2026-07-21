# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        if not root: return True

        def validLeft(node, low, high):
            if not node:
                return True
            
            if not low < node.val <high:
                return False
            
            return validLeft(node.left, low, node.val) and validRight(node.right, node.val, high)

        def validRight(node, low, high):
            if not node:
                return True
            
            if not low < node.val <high:
                return False

            return validLeft(node.left, low, node.val) and validRight(node.right, node.val, high)

        return validLeft(root.left, -float('infinity'), root.val) and validRight(root.right, root.val, float('infinity'))