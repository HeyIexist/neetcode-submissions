class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int> hashMap1(26, 0);
        vector<int> hashMap2(26, 0);
        int i = 0;
        int j = s1.size() - 1;
        for (char ch : s1) {
            hashMap1[ch - 'a']++;
        }
        for (int ind = 0; ind < s1.size(); ind++) {
            hashMap2[s2[ind] - 'a']++;
        }
        while (j < s2.size()) {
            if (hashMap1 == hashMap2) return true;

            hashMap2[s2[i] - 'a']--;
            i++;
            
            j++;
            if(j < s2.size())
                hashMap2[s2[j] - 'a']++;
        }
        return hashMap1 == hashMap2;
    }
};
