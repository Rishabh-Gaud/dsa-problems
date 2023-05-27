class Solution {
public:
    string intToRoman(int num) {
        string ans;
       vector<string>alpha = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" } ;
       vector<int>number = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
       for(int i = 0; i < alpha.size(); i++) {
        //    cout << alpha[i] << endl;;
           while(num >= number[i]) {
               ans += alpha[i];
               num -= number[i];
           }
       }
       return ans;
    }
};