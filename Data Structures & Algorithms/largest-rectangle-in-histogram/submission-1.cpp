#include <bits/stdc++.h>
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        stack<int> st;
        long int maxarea = 0;
        st.push(0);
        for(int i = 1; i < heights.size(); i++){
            while(!st.empty() && heights[i] < heights[st.top()] ){
                int h = heights[st.top()];
                int w = 0;
                st.pop();
                if(st.empty()){
                    w = i;
                }
                else{
                    w = i -st.top()-1;
                }
                long int temparea = h*w;
                maxarea = max(maxarea, temparea);
            }
            st.push(i);
        }
        return maxarea;
    }
};
