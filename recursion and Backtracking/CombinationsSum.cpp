class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        solve(candidates,target,candidates.size()-1,temp);
        return ans;
        
    }
    void solve(vector<int>& arr, int ts,int n,vector<int>temp){
        if(ts==0){
            ans.push_back(temp);
            return;
        }
        if(n<0)return;
        if(arr[n]>ts){
            solve(arr,ts,n-1,temp);
        }else{
            solve(arr,ts,n-1,temp);
            temp.push_back(arr[n]);
            solve(arr,ts-arr[n],n,temp);
        }
    }
};
