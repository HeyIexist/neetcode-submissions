class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> solution;
        for (int i = 0; i < nums.size(); i++) {
            int j = i + 1;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum > 0)
                    k--;
                else if (sum < 0)
                    j++;
                else {
                    solution.push_back({nums[i], nums[j], nums[k]});
                    while(j < k && nums[j] == nums[j+1]) j++;
                    while(j < k && nums[k] == nums[k-1]) k--;
                    j++; k--;
                }
            }
        }
        return solution;
    }
};
