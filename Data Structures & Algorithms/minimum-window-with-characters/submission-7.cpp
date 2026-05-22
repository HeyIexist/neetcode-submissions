class Solution {
   public:
    string minWindow(string s, string t) {
        string solution = "";
        unordered_map<char, int> needMap;
        unordered_map<char, int> haveMap;
        for (char ch : t) {
            needMap[ch]++;
            haveMap[ch] = 0;
        }
        int needCount = needMap.size();
        int haveCount = 0;
        int i = 0, j = 0;
        while (j < s.size()) {
            if (needMap.count(s[j])) {
                haveMap[s[j]]++;
                if (haveMap[s[j]] == needMap[s[j]]) haveCount++;
            }
            while (haveCount == needCount) {
                string substring = s.substr(i, j - i + 1);
                if (solution.size() == 0)
                    solution = substring;
                else {
                    solution = solution.size() <= substring.size() ? solution : substring;
                }
                if (needMap.contains(s[i])) {
                    if (haveMap[s[i]] == needMap[s[i]]) haveCount--;
                    haveMap[s[i]]--;
                }
                    i++;
            }
            j++;
        }
        return solution;
    }
};
