class Solution {
public:
    int countOrders(int n) {
        long long ans=1;
        int Mod = 1e9+7;
        for(int i=1;i<=2*n;i++){
            ans*=i;
            if(i%2==0){
                ans/=2;
            }
            ans%=Mod;
        }
        return ans;
        
    }
};//2 * 1  =2/2
