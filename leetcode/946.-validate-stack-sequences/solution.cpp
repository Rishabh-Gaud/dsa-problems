class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int i=0,j=0;
        while(i<pushed.size()){
            st.push(pushed[i]);
            i++;
            while(!st.empty()&&st.top()==popped[j]){
                st.pop();
                j++;
            }
            
        }
        if(j==popped.size())return 1;
        return 0;
        
        
    }
};