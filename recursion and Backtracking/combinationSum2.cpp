class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0,temp);
        return ans;
        
    }
    
    void solve(vector<int>& arr, int ts,int idx,vector<int>temp){
        if(ts==0){
            ans.push_back(temp);
            return ;
        }else{
            for(int i=idx;i<arr.size();i++){
                if(arr[i]>ts)return;
                if(i&&arr[i]==arr[i-1]&&i>idx)continue;
                temp.push_back(arr[i]);
                solve(arr,ts-arr[i],i+1,temp);
                temp.pop_back();
                
            }
        }//1 1 2 2 5 6 7 10 11 23 32 
    }
};
