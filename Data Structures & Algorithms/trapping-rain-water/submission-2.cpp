class Solution {
   public:
    int trap(vector<int>& height) {
        int size = height.size();
        int leftMax = height[0];
        int rightMax = height[size - 1];
        int left = 1;
        int right = size - 2;
        int water = 0;
        while (left <= right) {
            if (leftMax < rightMax) {
                if (height[left] > leftMax) {
                    leftMax = height[left];

                } else {
                    if (leftMax - height[left] > 0) water += leftMax - height[left];
                }
                left++;
            } else {
                if (height[right] > rightMax) {
                    rightMax = height[right];
                } else {
                    if (rightMax - height[right] > 0) water += rightMax - height[right];
                }
                right--;
            }
        }
        return water;
    }
};
