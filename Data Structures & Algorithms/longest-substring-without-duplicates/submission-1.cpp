class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int maxCount = 0;
        unordered_set<char> uset;
        for (int i = 0; i < s.size(); i++) {
            int count = 1;
            uset.clear();
            uset.insert(s[i]);
            for (int j = i + 1; j < s.size(); j++) {
                if (uset.count(s[j])) {
                    maxCount = max(count, maxCount);
                    uset.clear();
                    break;
                } else {
                    uset.insert(s[j]);
                    count++;
                }
                
            }
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};
