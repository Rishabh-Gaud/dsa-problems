class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>mp;
        for(auto a:nums1){
            for(auto b:nums2){
                mp[a+b]++;
            }
        }
        int ans=0;
        for(auto c:nums3){
            for(auto d:nums4){
                ans=ans+mp[-(c+d)];
            }
        }
        return ans;
        
        
        
    }// 1 -2 -1 2   // A=-1 B=1 
};
