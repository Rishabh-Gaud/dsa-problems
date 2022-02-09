class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int cnt=0;
        int n = nums.size();
        set<pair<int,int>>st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(nums[i]-nums[j])==k){
                    if(st.find({nums[i],nums[j]})==st.end()){
                        st.insert({nums[i],nums[j]});
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};
