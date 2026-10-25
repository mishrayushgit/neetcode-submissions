class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freqmap;
        int left = 0;
        int maxFreq = 0;
        int result = 0;
        for(int right = 0; right< s.size(); right++){
            freqmap[s[right]]+= 1;
            maxFreq = max(maxFreq,freqmap[s[right]]);
            while(((right - left + 1)-maxFreq > k)){
                freqmap[s[left]]-=1;
                left ++;
            }
            result = max(result, right - left + 1);
        }
        return result;
    }
};
