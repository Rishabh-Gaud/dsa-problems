class Solution {
public:
    int jump(vector<int>& nums) {
        int curr=0;
        int cnt=0;
        int maxi=0;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]+i>maxi){
                maxi = nums[i]+i;
            }
            if(i==curr){
                cnt++;
                curr=maxi;
            }
        }
        return cnt;
    }//nums = [2,3,1,1,4]
    // curr=4
    // maxi=4 i=0 cnt=2
};
