class Solution {
public:
    vector<int> sequentialDigits(int l, int h) {
        queue<int>q;
        for(int i=1;i<=9;i++){
            q.push(i);
        }
        vector<int>ans;
        while(!q.empty()){
            int f=q.front();
            q.pop();
            if(f<=h&&f>=l){
                ans.push_back(f);
            }
            if(f>h){
                break;
            }
            int num=f%10;
            if(num<9){
                q.push(f*10+(num+1));
            }
            
        }
        return ans;
        
    }
};
