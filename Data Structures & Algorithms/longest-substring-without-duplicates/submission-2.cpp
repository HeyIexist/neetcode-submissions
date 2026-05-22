class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        unordered_set<int> uset;
        int maxCount = 0;
        while (i <= j && j < s.size() && i < s.size()) {
            if (!uset.count(s[j])){
                uset.insert(s[j]);
                j++;
            }
            else {
                
                while (uset.count(s[j])) {
                    uset.erase(s[i]);
                    i++;
                }
            }
            maxCount = max(maxCount, j-i);
        }
        return maxCount;
    }
};
