class Solution {
public:
    int trap(vector<int>& height) {
        int totalWater = 0;
        int left = 1;
        int right = height.size() - 2;
        int leftMax = height[0];
        int rightMax = height[height.size()-1];
        while(left <= right){
            if(leftMax < rightMax) {
                if(height[left] > leftMax) leftMax = height[left];
                else{
                    int water = leftMax - height[left];
                    if(water > 0) totalWater += water;
                }
                left++;
            } else {
                if(height[right] > rightMax) rightMax = height[right];
                else {
                    int water = rightMax - height[right];
                    if(water > 0)
                    totalWater+=water;
                }
                right--;
            }
        }
        return totalWater;
    }
};
