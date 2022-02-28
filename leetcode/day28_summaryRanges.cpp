class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i=0;
        vector<string>ans;
        while(i<nums.size()){
            int s=i;
            int j=i+1;
            while(j<nums.size()&&nums[i]==nums[j]-1){
                i++;j++;
            }
            if(nums[s]==nums[i])ans.push_back(to_string(nums[s]));
            else ans.push_back((to_string(nums[s]))+"->"+to_string(nums[i]));
            i=j;
            
        }
        return ans;
    }
};
