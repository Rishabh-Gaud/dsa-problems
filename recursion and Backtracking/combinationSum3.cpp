class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>a;
        for(int i=0;i<9;i++){
            a.push_back(i+1);
        }
        vector<int>temp;
        solve(a,k,n,0,temp);
        return ans;
        
    }
    void solve(vector<int>a,int k,int ts,int idx,vector<int>temp){
        if(ts==0&&k==0){
            ans.push_back(temp);
            return ;
        }
        for(int i=idx;i<9;i++){
            if(a[i]>ts){
                solve(a,k,ts,i+1,temp);
            }else{
                temp.push_back(a[i]);
                solve(a,k-1,ts-a[i],i+1,temp);
                temp.pop_back();
            }
        }
    }// 1 2 3 4 5 6 7 8 9 
};
