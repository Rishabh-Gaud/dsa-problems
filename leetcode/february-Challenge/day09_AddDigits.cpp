class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int CurrSum=0;
            int x=num;
            while(x>0){
                CurrSum+=(x%10);
                x/=10;
            }
            num=CurrSum;
        }
        return num;
    }
};
