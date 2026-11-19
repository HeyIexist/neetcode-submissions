class Solution:
    def partition(self, s: str) -> List[List[str]]:
        res = []
        part = []

        def dfs(i):
            if i >= len(s):
                res.append(part.copy())
                return
            
            for j in range(i, len(s)):
                if self.ispalindrom(i, j, s):
                    part.append(s[i:j+1])
                    dfs(j+1)
                    part.pop()

        dfs(0)
        return res

    def ispalindrom(self, i, j, s):

        while i < len(s) and j >= 0 and i < j:
            if s[i] != s[j]:
                return False
            i+=1
            j-=1

        return True