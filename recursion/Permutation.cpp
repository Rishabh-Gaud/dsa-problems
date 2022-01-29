// https://leetcode.com/problems/permutations/

class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> permute(vector<int>& nums) {
        // vector<int>temp;
        solve(nums,0,nums.size());
        return res;
    }
    void solve(vector<int>&nums,int l,int r){
        if(l==r){
            res.push_back(nums);
            return;
        }
        for(int i=l;i<nums.size();i++){
            swap(nums[l],nums[i]);
            solve(nums,l+1,r);
            swap(nums[l],nums[i]);
                
                //1 do
                //2 action
                //3 undo
        }
    }
};
