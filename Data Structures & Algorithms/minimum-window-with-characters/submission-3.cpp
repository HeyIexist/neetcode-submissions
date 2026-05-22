class Solution {
   public:
    string minWindow(string s, string t) {
        vector<int> hash_t(127, 0);
        for (char ch : t) {
            hash_t[ch]++;
        }
        string solution = "";
        for (int i = 0; i < s.size(); i++) {
            vector<int> hash_s(127, 0);
            int j = i;
            for (; j < s.size(); j++) {
                hash_s[s[j]]++;
                bool ok = true;
                for (int k = 0; k < 127; k++) {
                    if (hash_t[k] <= hash_s[k])
                        continue;
                    else {
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    string substring = s.substr(i, j - i + 1);
                    if (solution.empty())
                        solution = substring;
                    else {
                        solution = solution.size() < substring.size() ? solution : substring;
                    }
                }
            }
        }
        return solution;
    }
};
