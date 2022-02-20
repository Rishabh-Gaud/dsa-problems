class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int unconvered=0;
        int left=-1,right=-1;
        sort(intervals.begin(),intervals.end());
        for(auto interval:intervals){
            if(interval[0]>left&&interval[1]>right){
                unconvered++;
                left = interval[0];
            }
            right = max(right,interval[1]);
        }
        return unconvered;
    }//[[1,4],[2,8],[3,6]]  l=2,r=8 ans=2
};
