class Solution {
public:
    int mp[10002];
    int t[10002];
    int deleteAndEarn(vector<int>& nums) {
        memset(mp,0,sizeof mp);
        memset(t,-1,sizeof t);
        for(int i:nums){
            mp[i]++;
        }
        return solve(10001);
    }
    int solve(int n){
        if(n<0)return 0;
        if(t[n]!=-1)return t[n];
        return t[n]= max(n*mp[n]+solve(n-2),solve(n-1));
        
    }
};
