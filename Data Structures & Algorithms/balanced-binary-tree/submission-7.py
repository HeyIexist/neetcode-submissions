# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if not root: return True
        def height(node):
            if not node: return (0, True)
            l = height(node.left)
            r = height(node.right)
            h = 1 + max(l[0], r[0])
            diff = abs(l[0]-r[0]) <= 1 and l[1] and r[1]
            return (h, diff)
        return height(root)[1]