class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> solution;
        set<vector<int>> seen;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++){
                for(int k = j+1; k < nums.size(); k++){
                    int sum = nums[i]+nums[j]+nums[k];
                    if(sum == 0) {
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        sort(triplet.begin(), triplet.end());
                        if(!seen.count(triplet)){
                            seen.insert(triplet);
                            solution.push_back(triplet);
                        }
                    }
                }
            }
        }
        return solution;
    }
};
