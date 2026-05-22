class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> outcome(nums.size(), 1);
        int prefix = 1;
        int postfix = 1;
        for(int i = 0; i < nums.size(); i++) {
            outcome[i] = prefix;
            prefix *= nums[i];
        }
        for(int i = nums.size()-1; i >= 0; i--) {
            outcome[i] = outcome[i] * postfix;
            postfix = nums[i] * postfix;
        }
        return outcome;
    }
};
