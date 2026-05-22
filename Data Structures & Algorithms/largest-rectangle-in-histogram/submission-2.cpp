class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int size = heights.size();
        vector<int> leftbounds(size);
        vector<int> rightbounds(size);
        leftbounds[0] = -1;
        rightbounds[size-1] = size;
        int maxArea = heights[0];
        for(int i = 1; i < heights.size(); i++){
            int height = heights[i];
            int j = i-1;
            while(j >= 0 && heights[j] >= heights[i]){
                j = leftbounds[j];
            }
            leftbounds[i] = j;
        }
        for(int i = size-2; i >= 0; i--){
            int height = heights[i];
            int j = i+1;
            while(j < size && heights[j] >= heights[i]){
                j = rightbounds[j];
            }
            rightbounds[i] = j;
        }
        for(int i = 0; i < size; i++) {
            int height = heights[i];
            int left = leftbounds[i];
            int right = rightbounds[i];
            int width = right - left - 1;
            int area = height * width;
            maxArea = max(area, maxArea);
        }
        return maxArea;
    }
};
