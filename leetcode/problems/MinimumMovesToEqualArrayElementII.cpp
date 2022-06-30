class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int midE =nums[nums.size()/2];
        int moves =0;
        for(auto &it:nums){
            moves+=abs(it-midE);
        }
        return moves;
    }
};
