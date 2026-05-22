class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i = 0, j = k - 1;
        vector<int> solution;
        while(j < nums.size()){
            int max = INT_MIN;
            for(int ind = i; ind <= j; ind++){
                max = std::max(max, nums[ind]);
            }
            solution.push_back(max);
            i++;
            j++;
        }
        return solution;
    }
};
