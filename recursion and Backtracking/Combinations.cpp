class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        solve(n,k,temp,0,0);
        return ans;
    }
    void solve(int n,int k,vector<int>temp,int currsize,int l){
        if(currsize==k){
            ans.push_back(temp);
            return;
        }
        for(int i=l;i<n;i++){
            temp.push_back(i+1);
            solve(n,k,temp,currsize+1,i+1);
            temp.pop_back();
        }
        
    }
}; // [1 2 3 4] k=2;
