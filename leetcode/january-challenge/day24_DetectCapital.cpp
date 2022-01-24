class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt=0;
        for(int i=0;i<word.size();i++){
            if(word[i]>='A'&&word[i]<='Z'){
                cnt++;
            }
        }
        if(cnt==word.size()){
            return 1;
        }
        if(cnt==1&&word[0]>='A'&&word[0]<='Z')return 1;
        if(cnt==0)return 1;
        return 0;
    }
};
