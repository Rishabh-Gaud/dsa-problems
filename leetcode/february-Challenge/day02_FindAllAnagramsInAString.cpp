class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>temp(26);
        for(auto c:p){
            temp[c-'a']++;
        }
        vector<int>ans;
        vector<int>tempS(26);
        int i=0,j=0;
        int k = p.size();
        while(j<s.size()){
            tempS[s[j]-'a']++;
            if(j-i+1>k){
                tempS[s[i]-'a']--;
                i++;
            }
            if(j-i+1==k){
                bool flag=1;
                for(int x=0;x<26;x++){
                    if(temp[x]!=tempS[x]){
                        flag=0;
                    }
                }
                if(flag){
                    ans.push_back(i);
                }
            }
            
            j++;
        }
        return ans;
    }
};
