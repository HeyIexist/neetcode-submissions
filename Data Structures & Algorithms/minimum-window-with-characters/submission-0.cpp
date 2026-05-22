class Solution {
    bool isValid(string s, string t){
        vector<int> hash1(128, 0), hash2(128, 0);
        for(char ch : s){
            hash1[ch]++;
        }
        for(char ch : t){
            hash2[ch]++;
        }
        for(char ch : t) {
            if(hash1[ch] < hash2[ch]) 
                return false;
        }
        return true;
    }
public:
    string minWindow(string s, string t) {
        vector<string> solutions;
        for(int i = 0; i < s.size(); i++){
            for(int j = i; j < s.size(); j++){
                string substring = s.substr(i, j-i+1);
                if(isValid(substring, t)){
                    solutions.push_back(substring);
                }
            }
        }
        if (solutions.empty()) return "";
        string smallest = solutions[0];
        for(string solution : solutions){
            if (solution.size() < smallest.size())
                smallest = solution;
            
        }
        return smallest;
    }
};
