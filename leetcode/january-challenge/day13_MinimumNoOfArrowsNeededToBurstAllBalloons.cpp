bool comp(vector<int>&v1,vector<int>&v2){
    return v1[1]<v2[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),comp);
        int ans=1;
        int arrow = p[0][1];
        for(int i=0;i<p.size();i++){
            if(arrow>=p[i][0])continue;
            ans++;
            arrow = p[i][1];
        }
        return ans;
    }
};
// [[10,16],[2,8],[1,6],[7,12]]
// [[1,6],[2,8],[7,12],[10,16]];
