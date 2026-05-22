class Solution {
public:
    bool isPalindrome(string s) {
        
        string filteredString = "";
        for(char c : s) {
            if( isalnum(c) ) filteredString.push_back(tolower(c));
        }
        int i = 0;
        int j = filteredString.size()-1;
        while(i < j) {
            if(filteredString[i] != filteredString[j]) return false;
            i++;
            j--;
        }
        return true; 
    }
};
