class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int size = heights.size();
        int maxArea = heights[0];
        for(int i = 0; i < size; i++) {
            int left = i;
            int right = i;
            while(left >= 0 && heights[left] >= heights[i]) {
                left--;
            }
           
            while(right < size && heights[right] >= heights[i]){
                right++;
            }
            int width = right - left - 1;
            int area = heights[i] * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
