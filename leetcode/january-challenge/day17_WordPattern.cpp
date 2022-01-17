class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string>v;
        string word;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                v.push_back(word);
                word="";
                
            }else{
                word+=s[i];
            }
        }
        v.push_back(word);
        if(v.size()!=p.size())return 0;
        unordered_map<char,string>mp;
        for(int i=0;i<p.size();i++){
            mp[p[i]] = v[i];
        }
        set<string>st;
        for(auto it:mp){
            st.insert(it.second);
        }
        if(st.size()!=mp.size())return 0;
        for(int i=0;i<p.size();i++){
            if(mp[p[i]]!=v[i])return 0;
        }
        return 1;
        
        
    }
};
//a  dog
// b= cat //abaaa dog cat cat fish
