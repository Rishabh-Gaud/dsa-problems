class Solution {
public:
    int bitwiseComplement(int n) {
        string temp;
        if(n==0)return 1;
        while(n>0){
            temp+=  ('1'-n%2);
            n/=2;
        }
        reverse(temp.begin(),temp.end());
        int ans=0;
        for(int i=0;i<temp.size();i++){
            ans=ans*2+(temp[i]-'0');
            
        }
        return ans;
    }
    
    
};
//step 1: find its binary representation
//step 2: flips all 1->0 or 0->1 ;
//step 3: convert binary representation to decimal
