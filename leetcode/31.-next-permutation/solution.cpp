class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakPoint = -1;
        for(int i = nums.size() - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                breakPoint = i;
                break;
            }
        }
        if(breakPoint == -1) {
            reverse(nums.begin(), nums.end());
            return ;
        }
        cout << breakPoint << endl;
        for(int i = nums.size() - 1; i > breakPoint; i--) {
            if(nums[i] > nums[breakPoint]) {
                swap(nums[i], nums[breakPoint]);
                reverse(nums.begin() + breakPoint + 1, nums.end());
                break;
            }
        }

    }
};