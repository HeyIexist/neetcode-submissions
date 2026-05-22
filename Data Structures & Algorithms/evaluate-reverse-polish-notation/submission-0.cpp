class Solution {
    int result(int a, string c, int b) {
        if (c == "+")
            return a + b;
        else if (c == "-")
            return a - b;
        else if (c == "*")
            return a * b;
        else if (c == "/")
            return a / b;
    }

   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (string ch : tokens) {
            if (ch == "+" || ch == "-" || ch == "*" || ch == "/") {
                int op2 = s.top();
                s.pop();
                int op1 = s.top();
                s.pop();
                s.push(result(op1, ch, op2));
            } else {
                s.push(stoi(ch));
            }
        }
        return s.top();
    }
};
