class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = 1;
        int maxsum = 0;
        while(j<prices.size() && prices.size() > 1){
            if(prices[i]<prices[j]){
                maxsum = max(maxsum, prices[j] - prices[i]);
                j++;
                
            }
            else{
                i = j;
                j = j + 1;
            }
        }
        return maxsum;
    }
};
