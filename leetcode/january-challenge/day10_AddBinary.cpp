class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int i=0,j=0;
        int carry=0;
        string ans;
        while(i<a.size()&&j<b.size()){
            int sum = (a[i]-'0')+(b[j]-'0')+carry;
            if(sum==3){
                ans+="1";
                carry=1;
            }else if(sum==2){
                ans+="0";
                carry=1;
            }else if(sum==1){
                ans+="1";
                carry=0;
            }else{
                ans+="0";
                carry=0;
            }
            i++;
            j++;
        }
        while(i<a.size()){
            int sum = (a[i]-'0')+carry;
            if(sum==2){
                ans+="0";
                carry = 1;
                
            }
            else if(sum==1){
                ans+="1";
                carry=0;
            }else{
                ans+="0";
                carry=0;
            }
            i++;
        }
        
        while(j<b.size()){
            int sum = (b[j]-'0')+carry;
            if(sum==2){
                ans+="0";
                carry = 1;
                
            }
            else if(sum==1){
                ans+="1";
                carry=0;
            }else{
                ans+="0";
                carry=0;
            }
            j++;
        }
        if(carry==1){
            ans+="1";
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// 1 + 1 = 10
// 0 + 1 = 01;
// 1 + 0 = 01;
// 0 + 0 = 00;
// 1 + 1 + 1 = 11
