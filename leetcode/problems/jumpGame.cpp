class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=0;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(maxi<i+nums[i]){
                maxi = i+nums[i];
            }
            if(maxi==i){
                return 0;
            }
        }
        if(maxi>=n-1){
            return 1;
        }
        return 0;
    }//nums = [3,2,1,0,4] maxi=0->3
};
