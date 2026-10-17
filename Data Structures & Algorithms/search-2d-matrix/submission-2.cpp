class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix.size()-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(matrix[mid][0]>target){
            r = mid - 1;
        }
        else if (matrix[mid][matrix[0].size()-1]<target){
            l = mid + 1;
        }
        else if(matrix[mid][0]<=target && matrix[mid]    [matrix[0].size()-1]>=target){
            int low = 0;
            int high = matrix[0].size()-1;
            while(low <= high){
                int mid2 = low + (high-low)/2;
                if(matrix[mid][mid2]>target){
                    high = mid2-1;
                }
                else if(matrix[mid][mid2]<target){
                    low = mid2 + 1;
                }
                else{
                    return true;
                }
                
            }
            return false;
        }
    }
    return false;
    }
};
