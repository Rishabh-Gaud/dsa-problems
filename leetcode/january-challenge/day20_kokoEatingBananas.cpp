class Solution {
public:
    bool check(vector<int>p,int ans,int h){
        int taking_hours=0;
        for(int i=0;i<p.size();i++){
            if(p[i]%ans==0){
                taking_hours+=p[i]/ans;
            }else{
                taking_hours+=p[i]/ans+1;
            }
        }
        if(taking_hours>h){
            return 0;
        }
        return 1;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=0;
        for(auto it:piles){
            r=max(r,it);
        }
        while(l<=r){
            int mid = l+(r-l)/2;
            if(check(piles,mid,h)){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};//  piles = [3,6,7,11], h = 8   k=11,10,9,8,7,6,ch,4,3  1
            //  1 2 3 4
