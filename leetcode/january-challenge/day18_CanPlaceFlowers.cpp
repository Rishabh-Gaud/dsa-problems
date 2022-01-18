class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        int cnt=0;
        int ans=0;
        int i=0;
        if(a[i]==0){
            for(i=0;i<a.size();i++){
                if(a[i]==0){
                    cnt++;
                }else{
                    ans+=cnt/2;
                    cnt=0;
                    break;
                }
            }
        }
        if(i==a.size()){
            if(cnt%2==0){
                return (cnt/2>=n);
            }else{
                return (cnt/2+1>=n);
            }
        }
        for(;i<a.size()-1;i++){
            if(a[i]==1){
                if(cnt>=3){
                    if(cnt%2==0){
                        ans+=cnt/2-1;
                    }else{
                        ans+=cnt/2;
                    }
                }
                cnt=0;
            }else{
                cnt++;
            }
        }
        if(a[i]==1){
        if(cnt>=3){
                    if(cnt%2==0){
                        ans+=cnt/2-1;
                    }else{
                        ans+=cnt/2;
                    }
                }
        }
        else{
            ans+=(cnt+1)/2;
        }
        return (ans>=n);
        
    }
};
