# Definition for a binary tree node.
# class TreeNode:
#     def __init__(Collection, self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        q = collections.deque([root])
        res = []
        while q:
            level = []
            qLen = len(q)
            for i in range(qLen):
                node = q.popleft()
                if node:
                    level.append(node.val)
                    q.append(node.left)
                    q.append(node.right)
            if level:
                res.append(level)
        final = []
        for r in res:
            final.append(r[-1])
        return final