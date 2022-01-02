class Solution {
public:
    int n;
    int dp[501][501];
    
    int solve(vector<int>&arr,int i,int j){
        if(i>j){
            return 0;
        }
        
        if(i==j){
            int temp = arr[i];
            if(i-1>=0){
                temp*=arr[i-1];
            }
            if(i+1<n){
                temp*=arr[i+1];
            }
            return temp; 
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=0;
        for(int k=i;k<=j;k++){
            int temp = arr[k];
            if(i-1>=0){
                temp*=arr[i-1];
            }
            if(j+1<n){
                temp*=arr[j+1];
            }
            temp += (solve(arr,i,k-1)+solve(arr,k+1,j));
            ans = max(ans,temp);
        }
        
        return dp[i][j]=ans;
        
    }
  
    int maxCoins(vector<int>& nums) {
        vector<int>arr;
        arr.push_back(1);
        for(auto it:nums){
            arr.push_back(it);
        }
        memset(dp ,-1 , sizeof(dp));
        arr.push_back(1);
        n= arr.size();
        return solve(arr,1,nums.size());
    }
    

};
