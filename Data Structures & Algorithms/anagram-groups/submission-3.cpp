class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> solution;
       map<vector<int>, vector<string>> umap;
        for(string str : strs) {
            vector<int> hash(26, 0);
            for (char ch : str) {
                hash[ch - 'a']++;
            }
        umap[hash].push_back(str);
        }
        for(auto &element : umap) {
            solution.push_back(element.second);
        }
        return solution;
    }
};
