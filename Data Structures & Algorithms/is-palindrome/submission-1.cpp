class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        
        string st;
        for(int k = 0; k<size; k++){
            if(isalnum(s[k])){
                st+=s[k];
            }
            continue;
        }
        int i = 0;
        int j = st.size() - 1;
        while(i<=j){
            if(tolower(st[i]) != tolower(st[j])){
                cout<<st[i];
                cout<<st[j];
                return false;
            }
            
            i++;
            j--;
        }
        return true;
    }
};
