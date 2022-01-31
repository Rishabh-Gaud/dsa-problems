class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int mx=0;
        for(int i=0;i<a.size();i++){
            int sumOfRow=0;
        
            for(int j=0;j<a[0].size();j++){
                sumOfRow+=a[i][j];
            }
            mx = max(mx,sumOfRow);
        }
        return mx;
        
    }
};
