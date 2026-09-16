class Solution {
public:

    string encode(vector<string>& strs) {
        string st;
        for(auto stringg: strs){
            st+= to_string(stringg.size())+'#'+ stringg;
        }
        return st;

    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i<s.size()){
            int j = i;
            while (s[j]!= '#'){
                j++;
            }
            int len = stoi(s.substr(i, j-i));
            string word;
            word = s.substr(j+1,len);
            ans.push_back(word);
            i = j+1 + len;
        }
           
        
        return ans;
    }
};
