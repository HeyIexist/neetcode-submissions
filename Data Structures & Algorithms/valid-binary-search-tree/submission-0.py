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
        if not self.allLessThan(root.left, root.val):
            return False
        if not self.allMoreThan(root.right, root.val):
            return False
        return self.isValidBST(root.left) and self.isValidBST(root.right)

    def allLessThan(self, node, bound):
        if not node:
            return True
        if node.val >= bound:
            return False
        return self.allLessThan(node.left, bound) and self.allLessThan(node.right, bound)

    def allMoreThan(self, node, bound):
        if not node:
            return True
        if node.val <= bound:
            return False
        return self.allMoreThan(node.left, bound) and self.allMoreThan(node.right, bound)
    

    
        