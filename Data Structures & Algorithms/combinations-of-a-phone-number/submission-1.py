class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        res = []
        hashmap = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz",
        }

        def dfs(i, s):
            # if i == len(digits):
            #     if len(s) != 0:
            #         res.append(s)
            #     return
            if len(s) == len(digits):
                res.append(s)
                return
            for char in hashmap[digits[i]]:
                # s = s + char
                dfs(i+1, s + char)
                # s = s[:-1]
        if digits:    
            dfs(0, '')
        return res
