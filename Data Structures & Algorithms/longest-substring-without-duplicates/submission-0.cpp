class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mapi;
        int i = 0;
        int j = 0;
        int maxlen = 0;
        for(int k = 0; k < s.size(); k++){
            if(!mapi[s[k]]){
            mapi[s[k]] = 1;
            maxlen = max(maxlen,k-i+1);
            }
            else{
            while(s[i] != s[k]){
                mapi[s[i]] = 0;
                i++;
            }
            mapi[s[i]] = 0;
            i++;
            mapi[s[k]] = 1;
            
            }
        }
        return maxlen;
    }
};
