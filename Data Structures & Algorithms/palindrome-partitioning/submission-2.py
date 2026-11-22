class Solution:
    def partition(self, s: str) -> List[List[str]]:
        res = []
        substrs = []

        def dfs(i):
            if len(s) == i:
                res.append(substrs[:])
                return

            for j in range(i, len(s)):
                if isPal(i, j):
                    substrs.append(s[i:j+1])
                    dfs(j + 1)
                    substrs.pop()

        def isPal(i, j):
            while i < j:
                if s[i] != s[j]:
                    return False
                i += 1
                j -= 1
            return True

        dfs(0)

        return res
