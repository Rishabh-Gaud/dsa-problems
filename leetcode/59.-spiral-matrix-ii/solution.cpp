class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
        int x=1;
        int up=n-1,l=n-1,down=0,r = 0;
        while(x<=n*n){
            for(int col = r;col<=l;col++){
                v[down][col] = x++;
            }
            down++;
            for(int row = down;row<=up;row++){
                v[row][l]=x++;
            }
            l--;
            for(int col = l;col>=r;col--){
                v[up][col]=x++;
            }
            up--;
            for(int row = up;row>=down;row-- ){
                v[row][r] = x++;
            }
            r++;
        }
        return v;
    }
};