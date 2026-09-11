class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mapo;
        vector<vector<string>> values;
        
        for(auto word : strs){
            vector<int> count(26,0);
            for(char c : word){
                count[c-'a']++;
            }
            string key;
            for(int n : count){
                key += "#"+to_string(n);
            }
            mapo[key].push_back(word);
        }
        for(auto& pairr : mapo){
            vector<string> res;
            for(int i = 0; i< pairr.second.size();i++){
                res.push_back(pairr.second[i]);
            }
            values.push_back(res);
        }
        return values;
    }
};
