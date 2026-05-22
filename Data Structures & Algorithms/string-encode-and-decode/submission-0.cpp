class Solution {
public:

    string encode(vector<string>& strs) {
        vector<int> length(strs.size());
        for(int i = 0; i < strs.size(); i++) {
            length[i] = strs[i].size();
        }
        string encoded_string = "";
        for(int i = 0; i < strs.size(); i++) {
                encoded_string += to_string(length[i]) + "#";
            for(int j = 0; j < strs[i].size(); j++) {
                encoded_string += strs[i][j];
            }
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        while(i < s.size()) {
            string len_str = "";
            while(s[i] != '#') {
                len_str += s[i];
                i++;
            }
            int length = stoi(len_str);
            decoded.push_back(s.substr(i+1, length));
            i = i + length + 1;
        }
        return decoded;
    }
};
