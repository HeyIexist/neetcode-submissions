class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[m - 1].size();
        int leftRow = 0;
        int rightRow = m-1;
        
        int midRow = leftRow + (rightRow - leftRow) / 2;
        while (leftRow <= rightRow) {
            int _midRow = leftRow + (rightRow - leftRow) / 2;
            if(target < matrix[_midRow][0])
                rightRow = _midRow - 1;
            else if(target > matrix[_midRow][n-1])
                leftRow = _midRow + 1;
            else {
            midRow = _midRow;
            break;

            }    
        }

        int left = 0;
        int right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int num = matrix[midRow][mid];
            if (target < num)
                right = mid - 1;
            else if (target > num)
                left = mid + 1;
            else
                return true;
        }
        return false;
    }
};
