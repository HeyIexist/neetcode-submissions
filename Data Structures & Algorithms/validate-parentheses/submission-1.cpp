class Solution {
    private:
    char match(char ch) {
        switch(ch){
            case ')': return '(';
            case '}': return '{';
            case ']': return '[';
        }
    }
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            } else {
                if(st.empty() ||st.top() != match(ch)) return false;
                st.pop();
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};
