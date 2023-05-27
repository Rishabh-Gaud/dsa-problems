class Solution {
public:
    string s = "1";
    string countAndSay(int n) {
       if(n == 1 ) return s;
       string ansCandidate;
       char ch = s[0];
       int no = 0;
       for(int i = 0; i < s.size(); i++) {
           if(ch == s[i]) {
               no++;
           }
           else {
               ansCandidate += (no + '0');
               ansCandidate += ch;
               ch = s[i];
               no = 1;
           }
       } 
       if(no) {
           ansCandidate += (no + '0');
            ansCandidate += ch;
       }
       s = ansCandidate;
       return countAndSay(n - 1);
    }
};