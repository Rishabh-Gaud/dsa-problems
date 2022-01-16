class Solution {
public:
    int maxDistToClosest(vector<int>& s) {
        int ans=0;
        int maxi=0;
        int cnt=0;
        int n = s.size();
        if(s[0]==0){
            for(int i=0;i<n;i++){
                if(s[i]==0){
                    cnt++;
                }else{
                    break;
                }
            }
            ans = max(ans,cnt);
            cnt=0;
        }
        if(s[n-1]==0){
            for(int i=n-1;i>=0;i--){
                if(s[i]==0){
                    cnt++;
                }else{
                    break;
                }
            }
            ans=max(ans,cnt);
            cnt=0;
        }
        for(int i=0;i<n;i++){
            if(s[i]==0){
                cnt++;
                maxi = max(maxi,cnt);
            }else{
                cnt=0;
            }
        }
        if(maxi%2==0){
            return max(ans,maxi/2);
        }
        return max(ans,maxi/2+1);
        
        
        
    }//seats = [0,0,0,1,0,0]

};
