class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0;
        stack<char>st;
        bool flag=1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                flag=1;
                
            }else if(flag){
                st.pop();
                flag=0;
                score+=pow(2,st.size());
            }else{
                st.pop();
            }
        }
        return score;
    }// 1+1+8
};  
