class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=0;
        for(auto num:nums){
            if(idx<2||num>nums[idx-2]){
                nums[idx++]=num;
            }
        }
        return idx;
    }// nums = [1,1,1,2,2,3]
};
