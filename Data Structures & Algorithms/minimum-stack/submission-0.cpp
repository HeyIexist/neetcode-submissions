class MinStack {
    stack<int> st;
    stack<int> min;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(min.empty()) 
            min.push(val);
        else
            min.push(std::min(min.top(), val));
    }
    
    void pop() {
        st.pop();
        min.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min.top();
    }
};
