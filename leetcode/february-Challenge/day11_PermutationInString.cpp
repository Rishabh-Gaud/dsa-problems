class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>temp1(26),temp2(26);
        for(int i=0;i<s1.size();i++){
            temp1[s1[i]-'a']++;
        }
        int i=0,j=0,k=s1.size();
        while(j<s2.size()){
            temp2[s2[j]-'a']++;
            if(j-i+1>k){
                temp2[s2[i]-'a']--;
                i++;
            }
            if(j-i+1==k){
                bool flag=1;
                for(int l=0;l<26;l++){
                    if(temp1[l]!=temp2[l]){
                        flag=0;
                    }
                }
                if(flag)return true;
            }
            
            
            j++;
        }
        return 0;
        
    }
};
