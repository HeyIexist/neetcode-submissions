class Solution {
    int getMax(vector<int> vec) {
        int max = vec[0];
        for(int i : vec) {
            if(i > max)
            max = i;
        }
        return max;
    }
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();
        sort(nums.begin(), nums.end());
        vector<int> count(nums.size(), 0);
        count[0] = 1;
        int ind = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]+1)
                count[ind]++;
            else if(nums[i] == nums[i-1]) continue;
            else{
                ind++;
                count[ind] = 1;
            }
        }
        return getMax(count);
    }
};
