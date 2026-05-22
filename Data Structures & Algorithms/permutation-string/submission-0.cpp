class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<string, string> umap;
        sort(s1.begin(), s1.end());
        int i = 0;
        int j = i + s1.size()-1;
        while(j < s2.size()){
            string substring = s2.substr(i, j-i+1);
            sort(substring.begin(), substring.end());
            if(s1 == substring) return true;
            i++;
            j++;
        }
        return false;
    }
};
