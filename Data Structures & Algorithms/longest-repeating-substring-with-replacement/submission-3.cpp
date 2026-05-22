class Solution {
   public:
    int characterReplacement(string s, int k) {
        int i = 0;
        int j = 0;
        int output = 0;
        unordered_map<char, int> umap;
        int maxVal = 0;
        while (j < s.size()) {
            umap[s[j]]++;
            maxVal = max(maxVal, umap[s[j]]);
            int windowSize = j - i + 1;
            if(windowSize - maxVal <= k){
                output = max(output, windowSize);
            } else {
                umap[s[i]]--;
                i++;
            }
            j++;
        }
        return output;
    }
};
