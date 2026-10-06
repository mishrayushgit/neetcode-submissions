class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(auto c : s){
            if(st.empty()){
                st.push(c);
                continue;
            }
            if(
            st.top() == '[' && c == ']' ||
            st.top() == '(' && c == ')'||
            st.top() == '{' && c == '}'
            ){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};
