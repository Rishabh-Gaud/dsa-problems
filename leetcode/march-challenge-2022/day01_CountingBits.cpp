class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n+1,0);
        for(int i=1;i<=n;i++){
            v[i] = 1+v[i&(i-1)];
        }
        return v;
        
    }  
};  //n =14  1110 1100
// 1000 8
// 1001 9
// 1010 10 
// 1011 11 
// 1100 12
// 1101 13
// 1110 14
// 1111 15
