class Solution {
public:
    string longest(string s1, string s2) {
        int i = 0; 
        int j = 0;
        string ans;
        while(i < s1.size() && j < s2.size()) {
            if(s1[i] != s2[j]) break;
            ans += s1[i];
            i++;
            j++;
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
       for(int i = 1; i < strs.size(); i++) {
           strs[0] = longest(strs[0], strs[i]);
       }
       return strs[0];
    }
};