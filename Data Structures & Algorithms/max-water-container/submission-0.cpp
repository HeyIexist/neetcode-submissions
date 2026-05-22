class Solution {
public:
    
    int maxArea(vector<int>& heights) {
        int maxVolume = (1-0) * min(heights[0], heights[1]);
        for(int i = 0; i < heights.size()-1; i++) {
            for(int j = i+1; j < heights.size(); j++) {
                int volume = (j-i)*min(heights[i], heights[j]);
                if(volume > maxVolume) 
                    maxVolume = volume;
            }
        }
        return maxVolume;
    }
};
