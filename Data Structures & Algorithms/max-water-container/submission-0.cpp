class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int maxarea = 0;
        while(i < j){
            int h = min(heights[i], heights[j]);
            int b = j-i;
            maxarea = max(maxarea,(h*b));
            if(heights[i]>heights[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxarea;
    }
};
