class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> solution;
        unordered_map<string, vector<string>> umap;
        for (string str : strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            umap[sorted].push_back(str);
        }
        for(auto element : umap) {
            solution.push_back(element.second);
        }
        return solution;
    }
};
