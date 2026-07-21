# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        if not root: return True

        def validLeftSubtree(node, low, high):
            if not node:
                return True
            if node.val >= high or node.val <= low:
                return False

            return validLeftSubtree(node.left, low, node.val) and validRightSubtree(node.right, node.val, high)
        
        def validRightSubtree(node, low, high):
            if not node:
                return True
            if node.val <= low or node.val >=high:
                return False
            
            return validLeftSubtree(node.left, low, node.val) and validRightSubtree(node.right, node.val, high)

        return validLeftSubtree(root.left, - float('infinity'), root.val) and validRightSubtree(root.right, root.val, float('infinity'))