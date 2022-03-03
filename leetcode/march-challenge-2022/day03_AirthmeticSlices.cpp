class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)return 0;
        vector<int>t(nums.size(),0);
        int ans=0;
        if(nums[2]-nums[1]==nums[1]-nums[0])t[2]=1;
        ans+=t[2];
        for(int i=3;i<nums.size();i++){
            if(nums[i-1]-nums[i-2]==nums[i]-nums[i-1]){
                t[i] = t[i-1]+1;
            }
            ans+=t[i];
        }
        return ans;
        
    }
};
