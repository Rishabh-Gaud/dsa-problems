class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign =1;
        long long  ans=0;
        bool flag =1;
        bool white  =1;
        int mod = 1e9+7;
        while(i<s.size()){
            if(ans*sign>0){
                    if(ans>INT_MAX)return INT_MAX;
                }else if(ans*sign<0){
                    if(-ans<INT_MIN)return INT_MIN;
                }
            if(s[i]==' '&&white){
                i++;
                continue;
            }
            
            if((s[i]>='a'&& s[i]<='z')||s[i]>='A'&&s[i]<='Z'){
                return ans*sign;
            }
            if((s[i]=='-'||s[i]=='+')&&flag){
                sign=-1;
                if(s[i]=='+')sign = 1;
                                flag=0;
                white=0;

                
            }
            else if(s[i]>='0'&&s[i]<='9'){
                
                ans = ans*10+(s[i]-'0');
                flag=0;
                white =0;
            }else {
                if(ans*sign>0){
                    if(ans>INT_MAX)return INT_MAX;
                }else{
                    if(-ans<INT_MIN)return INT_MIN;
                }
                return ans*sign;
            }
            i++;
        }
        if(ans*sign>0){
            if(ans>INT_MAX)return INT_MAX;
        }else{
            if(-ans<INT_MIN)return INT_MIN;
        }
        return (ans*sign) ;
    }
};