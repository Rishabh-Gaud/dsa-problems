class Solution {
public:
    char findTheDifference(string s, string t) {
       vector<int>tempS(26);
        vector<int>tempT(26);
        for(int i=0;i<s.size();i++){
            tempS[s[i]-'a']++;
        }
        
        for(int i=0;i<t.size();i++){
            tempT[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(tempS[i]!=tempT[i]){
                return 'a'+i;
            }
        }
        return 'a';
    }//temp(26) tempT(26)
};
