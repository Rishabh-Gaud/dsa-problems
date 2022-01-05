class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>curr;
        dfs(ans,s,0,curr);
        return ans;
    }
    
    void dfs(vector<vector<string>>&ans,string s,int st,vector<string>curr){
        if(st>=s.size())ans.push_back(curr);
        for(int end = st;end<s.size();end++){
            if(ispal(s,st,end)){
                curr.push_back(s.substr(st,end-st+1));
                dfs(ans,s,end+1,curr);
                curr.pop_back();
            }
        }
    }
    bool ispal(string s,int st,int end){
        while(st<end){
            if(s[st++]!=s[end--])return false;
            
        }
        return true;
    }
};
// aabc
// a
