class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>last_idx(26);
        for(int i=0;i<s.size();i++){
            last_idx[s[i]-'a']=i;
        }
        vector<int>ans;
        int maxsofar=0;
        for(int i=0;i<s.size();i++){
           maxsofar=max(maxsofar,last_idx[s[i]-'a']);
            if(i==maxsofar){
                ans.push_back(i);
            }
            
            
        }
        
        for(int i=ans.size()-1;i>0;i--){
            ans[i]=ans[i]-ans[i-1];
        }
        ans[0]=ans[0]+1;
        return ans;
    }
};
