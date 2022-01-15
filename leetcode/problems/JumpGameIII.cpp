class Solution {
public:
    
    bool solve(vector<int>&arr,vector<int>&vis,int index){
            if(index<0||index>=arr.size()||vis[index])return false;
            if(arr[index]==0)return true;
            vis[index]=1;
        return solve(arr,vis,index-arr[index])||solve(arr,vis,index+arr[index]);
    }
    
    bool canReach(vector<int>& arr, int start) {
        vector<int>vis(arr.size()+1,0);
        return solve(arr,vis,start);
    }
};
