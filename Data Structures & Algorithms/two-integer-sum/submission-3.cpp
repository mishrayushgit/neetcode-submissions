class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> mapo;
      for(int i = 0; i < nums.size(); i++){
        mapo[nums[i]] = i;
      }
      for(int i =  0;i<nums.size(); i++){
        if(mapo.find(target-nums[i])!= mapo.end() && (i != mapo[target-nums[i]])){
            return {i,mapo[target - nums[i]]};
        }
      }
      return {};
    }
};
