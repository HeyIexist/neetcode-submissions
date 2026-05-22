class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int maxVolume = 0;
        while(i < j && i < heights.size()) {
            int volume = (j - i) * min(heights[i], heights[j]);
            if(volume>maxVolume) maxVolume = volume;
            if(heights[i] < heights[j]) i++;
            else j--;
        }
        return maxVolume;
    }
};
