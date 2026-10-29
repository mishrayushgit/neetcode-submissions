class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        int n1 = s1.size();
        int n2 = s2.size();
        if(n1>n2){
            return false;
        }
        for(int i = 0; i<n1; i++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        if(freq1 == freq2){
            return true;
        }
        for(int r = n1; r<n2; r++){
            freq2[s2[r]-'a']++;
            freq2[s2[r-n1]-'a']--;
            if(freq2 == freq1){
                return true;
            }
        }
        return false;

    }
};
