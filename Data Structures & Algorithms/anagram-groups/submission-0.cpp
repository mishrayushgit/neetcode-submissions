class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mapo;
        vector<vector<string>> values;
        for(int i = 0; i< strs.size(); i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            mapo[key].push_back(strs[i]);
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
