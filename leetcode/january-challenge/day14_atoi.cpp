class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n = s.size();
        if(n==0)return 0;
        int sign =1;
        int cnt=0;
        long long int ans=0;
        while(i<n&&s[i]==' '){
            i++;
        }
        while(i<n&&(s[i]=='+'||s[i]=='-')){
            cnt++;
            if(s[i]=='-'){
                sign =-1;
            }else{
                sign=1;
            }
            i++;
            if(cnt>1)return 0;
        }
        while(i<n&&s[i]>='0'&&s[i]<='9'){
            ans=ans*10+(s[i]-'0');
            
            if(ans>INT_MAX){
                if(sign==-1)return INT_MIN;
                return INT_MAX;
            }
            i++;
        }
        return ans*sign;
    }
};
