class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xxor=0;
        for(auto i:nums){
            xxor^=i;
        }
        return xxor;
    }
};
