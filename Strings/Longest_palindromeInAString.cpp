https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string 

bool check(string s){
        int n = s.size();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i])return 0;
        }
        return 1;
    }
    string longestPalin (string s) {
       int mx=0;
       string ans;
       for(int i=0;i<s.size();i++){
           string substr;
           for(int j=i;j<s.size();j++){
               substr+=s[j];
               if(check(substr)&&substr.size()>mx){
                   ans = substr;
                   mx = substr.size();
               }
           }
       }
       return ans;
    }
