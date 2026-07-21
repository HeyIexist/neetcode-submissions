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
            if not node:
                return (0, True)

            left = height(node.left)
            right = height(node.right)

            isValidLeft = left[1]
            isValidRight = right[1]

            leftHeight = left[0]
            rightHeight = right[0]

            h = 1 + max(leftHeight, rightHeight)
            diff = abs(leftHeight - rightHeight)

            isValid = diff <= 1 and isValidLeft and isValidRight
            
            return (h, isValid)
        return height(root)[1]
