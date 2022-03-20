class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int>vis(tops.size(),0);
        int n = tops.size();
        vector<int>maybeans;
       for(int j=1;j<7;j++){
                for(int i=0;i<n;i++){
                if(tops[i]==j||bottoms[i]==j)vis[i]=1;
            }
           int cnt=0;
                for(int i=0;i<n;i++){
                if(vis[i])cnt++;
                 vis[i]=0;   
            }
           if(cnt==n){
               maybeans.push_back(j);
           }
       }
        int ans=INT_MAX;
        if(maybeans.size()==0)return -1;
        for(int i=0;i<maybeans.size();i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(tops[j]!=maybeans[i])cnt++;
            }
            
            ans = min(ans,cnt);
            cnt=0;
             for(int j=0;j<n;j++){
                if(bottoms[j]!=maybeans[i])cnt++;
            }
            
            ans = min(ans,cnt);
        }
        return ans;
    }
};
