class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        solve(nums,temp,0);
        return ans;
    }
    void solve(vector<int>nums,vector<int>temp,int pos){
        if(pos==nums.size()){
            ans.push_back(temp);
            return ;
        }
        // choice 1
            solve(nums,temp,pos+1);
        //choice2
            temp.push_back(nums[pos]);
            solve(nums,temp,pos+1);
    }
};
