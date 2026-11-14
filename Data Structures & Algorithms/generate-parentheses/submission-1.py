class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        def backtrack(open_parenthesis,close_parenthesis, brackets):
            if close_parenthesis == n:
                res.append(brackets)
                return
            if open_parenthesis < n:
                backtrack(open_parenthesis + 1, close_parenthesis, brackets + '(')
            if close_parenthesis < open_parenthesis:
                backtrack(open_parenthesis, close_parenthesis+1, brackets + ')')
        backtrack(0, 0, '')
        return res