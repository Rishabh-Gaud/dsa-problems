class Solution {
public:
    int titleToNumber(string s) {
        int sum=0;
        for(auto c:s){
            sum = sum*26+(c-'A'+1);
        }
        return sum;
    } //sum=1; 26+2
};
//00 01 02 to 09 10 19 20 21
