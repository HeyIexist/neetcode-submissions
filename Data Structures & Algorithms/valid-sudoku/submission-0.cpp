class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> cols;
        map<pair<int, int>, unordered_set<char>> boxes;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board.size(); j++) {
                char element = board[i][j];
                if (element == '.') continue;
                if (rows[i].count(element)) return false;
                rows[i].insert(element);
                if (cols[j].count(element)) return false;
                cols[j].insert(element);
                if (boxes[{i / 3, j / 3}].count(element)) return false;
                boxes[{i / 3, j / 3}].insert(element);
            }
        }
        return true;
    }
};
