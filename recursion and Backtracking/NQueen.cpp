class Solution {
public:
    vector<vector<string>>ans;
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        solve(board,0);
        // cout<<ans.size();
        return ans;
    }
    void solve(vector<string>board,int row){
        if(row==board.size()){
            ans.push_back(board);
            return ;
        }
        for(int i=0;i<board.size();i++){
            if(isSafe(row,i,board)){
                board[row][i]='Q';
                solve(board,row+1);
                board[row][i]='.';
            }
            
        }
    }
    bool isSafe(int row,int col, vector<string>b){
        for(int i=row;i>=0;i--){
            if(b[i][col]=='Q')return 0;
            
        }
        for(int i=row,j=col;i>=0&&j>=0;i--,j--){
            if(b[i][j]=='Q'){
                return 0;
            }
        }
        
        for(int i=row,j=col;i>=0&&j<b.size();i--,j++){
            if(b[i][j]=='Q'){
                return 0;
            }
        }
        return 1;
    }
    
};
