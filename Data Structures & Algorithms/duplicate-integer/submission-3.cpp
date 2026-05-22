class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty()) return false;
        unordered_set<int> uset;
        for(int i : nums) {
            if (uset.contains(i)) return true;
            else uset.insert(i);
        }
        return false;
    }
};