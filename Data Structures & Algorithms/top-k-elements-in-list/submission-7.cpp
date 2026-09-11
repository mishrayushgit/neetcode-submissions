class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> bucket (nums.size()+1);
        unordered_map<int, int> mapo;
        vector<int> ans;
        for(int x : nums){
            mapo[x]++;
        }
        for(auto it : mapo){
            bucket[it.second].push_back(it.first);
        }
        for(int i = bucket.size()-1; i>0; i--){
            
            if(bucket[i].size()!= 0){
            for(int j = 0; j< bucket[i].size();j++){
                    if(k == 0){
                break;
            }
                ans.push_back(bucket[i][j]);
                k--;
                }
            }
        }
        return ans;

    }
};
