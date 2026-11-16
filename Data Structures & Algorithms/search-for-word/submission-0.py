class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        rows, cols = len(board), len(board[0])
        tracked = set()

        def backtrack(r, c, w):
            if w == len(word):
                return True
            
            if (r < 0 or c < 0 or r >= rows or c >= cols or board[r][c] !=word[w]) or (r, c) in tracked: return False

            tracked.add((r, c))

            found = (backtrack(r-1, c, w+1) or
                    backtrack(r+1, c, w+1) or
                    backtrack(r, c-1, w+1) or
                    backtrack(r, c+1, w+1))

            tracked.remove((r, c))

            return found
        
        for r in range(rows):
            for c in range(cols):
                if backtrack(r, c, 0): return True
            
        return False