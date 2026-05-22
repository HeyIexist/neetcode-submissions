class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> hash_s(128, 0);
        vector<int> hash_t(128, 0);
        for(char i : s) {
            hash_s[i]++;
        }
        for(char i : t) {
            hash_t[i]++;
        }
        return hash_s == hash_t;
    }
};
