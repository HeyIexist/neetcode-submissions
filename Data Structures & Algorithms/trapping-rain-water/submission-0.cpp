class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        vector<int> maxLeft(size, 0);
        vector<int> maxRight(size, 0);
        vector <int> minLR(size, 0);
        int max = 0;
        int water = 0;
        for(int i = 0; i < size; i++) {            
            maxLeft[i] = max;
            if(height[i] > max)    
                max = height[i];
        }
        max = 0;
        for(int i = size-1; i >= 0; i--) {
            maxRight[i] = max;
            if(height[i] > max)
                max = height[i];
        }
        for(int i = 0; i < size; i++) {
            minLR[i] = min(maxLeft[i], maxRight[i]);
        }
        for(int i = 0; i < size; i++) {
            int temp = minLR[i] - height[i];
            if( temp >= 0)
                water += temp;
        }
        return water;
    }
};
