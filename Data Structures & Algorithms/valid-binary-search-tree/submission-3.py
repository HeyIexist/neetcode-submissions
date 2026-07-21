# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        if not root: return True

        if not self.allLeftLess(root.left, root.val): return False

        if not self.allRightMore(root.right, root.val): return False

        return self.isValidBST(root.left) and self.isValidBST(root.right)

    def allLeftLess(self, node, bound):
        if not node:
            return True
        if node.val >= bound:
            return False
        return self.allLeftLess(node.left, bound) and self.allLeftLess(node.right, bound)
    
    def allRightMore(self, node, bound):
        if not node:
            return True
        if node.val <= bound:
            return False
        return self.allRightMore(node.left, bound) and self.allRightMore(node.right, bound)