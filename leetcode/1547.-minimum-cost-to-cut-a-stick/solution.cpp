class Solution {
public:
    vector<vector<int>>dp;
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        dp.resize(cuts.size()+1,vector<int>(cuts.size()+1,-1));
        return solve(cuts,1,cuts.size()-2);
    }
    int solve(vector<int>&cuts,int i,int j){
        if(i>j)return 0;
        int ans = INT_MAX;
        if(dp[i][j]!=-1)return dp[i][j];
        for(int k=i;k<=j;k++){
            int temp = cuts[j+1]-cuts[i-1]+solve(cuts,i,k-1)+solve(cuts,k+1,j);
            ans = min(ans,temp);
        }
        return dp[i][j]=ans;
    }
};