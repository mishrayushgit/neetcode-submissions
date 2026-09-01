class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr(26,0);
        if(s.length()!=t.length()){
            return false;
        }
        for(int i = 0; i< s.length();i++){
            arr[s[i]-'a']+=1;
            arr[t[i]-'a']-=1;
        }
        for(int ind : arr){
            if(ind!= 0){
                return false;
            }
        }
        return true;
    }
};
