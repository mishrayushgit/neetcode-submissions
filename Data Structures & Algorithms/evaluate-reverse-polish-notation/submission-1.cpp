class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(auto it : tokens){
            if(it != "*" && it!="+" && it!= "/" && it!= "-"){
                
                int num = stoi(it);
                st.push(num);
                
            }
            else{
                if(it == "*"){
                    int num1 = st.top();
                    st.pop();
                    int num2 = st.top();
                    st.pop();
                    int res = num2*num1;
                    st.push(res);
                }
                if(it == "+"){
                    int num1 = st.top();
                    st.pop();
                    int num2 = st.top();
                    st.pop();
                    int res = num2+num1;
                    st.push(res);
                }
                if(it == "-"){
                    int num1 = st.top();
                    st.pop();
                    int num2 = st.top();
                    st.pop();
                    int res = num2-num1;
                    st.push(res);
                }
                if(it == "/"){
                    int num1 = st.top();
                    st.pop();
                    int num2 = st.top();
                    st.pop();
                    int res = num2/num1;
                    st.push(res);
                }
            }
        }
        return st.top();
    }
};
