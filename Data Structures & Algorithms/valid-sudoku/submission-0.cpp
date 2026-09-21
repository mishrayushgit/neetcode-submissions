class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            set<char> seen;
            for(int j=0; j< 9; j++){
                
                if(board[i][j]=='.'){
                    continue;
                }
                if(seen.count(board[i][j])){
                    return false;
                }
                seen.insert(board[i][j]);
            }
            
        }
        for(int i = 0; i < 9; i++){
            set<char> seen;
            for(int j=0; j< 9; j++){
                if(board[j][i]=='.'){
                    continue;
                }
                if(seen.count(board[j][i])){
                    return false;
                }
                seen.insert(board[j][i]);
            }
            
        }
        for(int i = 0 ; i<9; i+=3){
            for(int j = 0 ; j<9; j+=3){
                set<char> seen;
            for(int m = i; m<i+3;m++){
                for(int n =j; n<j+3; n++){
                if(board[m][n]=='.'){
                    continue;
                }
                if(seen.count(board[m][n])){
                    return false;
                }
                seen.insert(board[m][n]);
                }
            }
        }
        }
        return true;
    }
};
