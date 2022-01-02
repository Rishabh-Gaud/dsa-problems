class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int>v(60);
        int res=0;
        for(int t:time){
            res+=v[(600-t)%60];
            v[t%60]++;
        }
        return res;
        
    }
    
};
