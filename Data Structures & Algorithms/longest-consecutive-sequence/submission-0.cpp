class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     unordered_set<int> s(nums.begin(),nums.end());
    int len = 0;
    for(int i : s){
        if(!s.count(i-1)){
            int current = i;
            int count = 1;
            while(s.count(current+1)){
                count++;
                current++;
            }
            len = max(len,count);
        }
    }
    return len;
    }
};
