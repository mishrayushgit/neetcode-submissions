class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push(s[0]);
        string stt = s.substr(1,s.size()-1);
        for(auto c : stt){
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
