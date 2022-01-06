class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>mp;
        for(auto t:trips){
            mp[t[1]]+=t[0];
            mp[t[2]]+=-t[0];
            
        }
        int filled = 0;
        
        for(auto it:mp){
            filled+=it.second;
            if(filled>capacity){
                return false;
            }    
        }
        return true;
    }
};
// {1,2},{3,3},{5,-2},{7,-3};
