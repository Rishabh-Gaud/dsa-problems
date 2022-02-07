class Solution {
public:
    vector<string>ans;
    vector<string>list;
    vector<string> letterCombinations(string d) {
        list = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(d.size()==0)return {};
        solve(d,0,"");
        return ans;
    }
    void solve(string d,int curr,string temp){
        if(d.size()==curr){
            ans.push_back(temp);
            return ;
        }
        string s  = list[d[curr]-'0'];
        for(int i=0;i<s.size();i++){
            temp.push_back(s[i]);
            solve(d,curr+1,temp);
            temp.pop_back();
        }
    }
};
