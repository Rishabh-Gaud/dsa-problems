class Solution {
public:
    int romanToInt(string s) {
       int answer = 0;
       unordered_map<char, int>mp;
       mp['I'] = 1;
       mp['V'] = 5;
       mp['X'] = 10;
       mp['L'] = 50;
       mp['C'] = 100;
       mp['D'] = 500;
       mp['M'] = 1000;
       answer += mp[s[s.size() - 1]];
       for(int i  = s.size() - 2; i >= 0; i--) {
           if(mp[s[i]] >= mp[s[i + 1]]){
               answer += mp[s[i]];
           }
           else answer -= mp[s[i]];
       } 
       return answer;
    }
};