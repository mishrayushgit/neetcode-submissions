class MinStack {
public:
stack<int> st;
stack<int> mini;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(mini.empty()){
            mini.push(val);
        }
        else{
            if(mini.top()>=val){
                mini.push(val);
            }
        }

    }
    
    void pop() {
        //check if the pop val is the curr mini
        if(st.top() == mini.top()){
            st.pop();
            mini.pop();
        }
        else{
            st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
