class Solution {
   public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, have;
        for (char ch : t) {
            need[ch]++;
            have[ch] = 0;
        }
        int needFreq = need.size();
        int haveFreq = 0;

        int resInd = 0, resLen = INT_MAX;
        int i = 0, j = 0;

        while (j < s.size()) {
            char curr = s[j];
            if (need.contains(curr)) {
                have[curr]++;
                if (need[curr] == have[curr]) haveFreq++;
            }
            while (haveFreq == needFreq) {
                if ((j - i + 1) < resLen) {
                    resLen = j - i + 1;
                    resInd = i;
                }
                char curr = s[i];
                if (have.contains(curr)) {
                    if (need[curr] == have[curr]) haveFreq--;
                    have[curr]--;
                }
                i++;
            }
            j++;
        }
        return resLen == INT_MAX ? "" : s.substr(resInd, resLen);
    }
};
