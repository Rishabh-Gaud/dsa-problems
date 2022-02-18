class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        
        for(auto c:num){
            while(ans.size()&&ans[ans.size()-1]>c&&k){
                k--;
                ans.pop_back();
            }
            if(c!='0'||ans.size())ans+=c;
        }
        while(ans.size()&&k){
            k--;
            ans.pop_back();
        }
        if(ans.size()==0)return "0";
        return ans;
        
    }
};//12342 k=2 
// 12345 k=2
