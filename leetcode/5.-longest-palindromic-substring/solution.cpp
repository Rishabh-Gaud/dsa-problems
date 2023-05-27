class Solution {
public:
    int expandAroundCenter(string s, int L, int R) {
        int i = 0;
        int j = s.size() - 1;
        while(L >= i && R <= j && s[L] == s[R]) {
            L--;
            R++;
        }
        return R - L - 1;
    }
    string longestPalindrome(string s) {
        int mx = 0;
        int l = -1; 
        int r = -1;
        for(int i = 0; i < s.size(); i++ ) {
            int oddCase = expandAroundCenter(s, i, i);
            int evenCase = expandAroundCenter(s, i, i + 1);
            int length = max(oddCase, evenCase);
            if(mx < length) {
                mx = length;
                l = i - (length - 1)/2;
                r = i + (length)/2;
            }
        }
        return s.substr(l, r - l + 1 );
    }
};