class Solution {
   public:
    int characterReplacement(string s, int k) {
        int output = 0;
        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> umap;
            int maxVal = 0;
            for (int j = i; j < s.size(); j++) {
                umap[s[j]]++;
                maxVal = max(maxVal, umap[s[j]]);
                int windowSize = j - i + 1;
                if(windowSize - maxVal <= k)
                    output = max(output, windowSize);
            }
        }
        return output;
    }
};
