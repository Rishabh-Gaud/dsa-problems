class Solution {
public:
    int evaluate(string temporary){
        long long int ans=0;
        for(int i=0;i<temporary.size();i++){
            ans=ans*2+(temporary[i]-'0');
        }
        return (int)ans;
    }
    bool queryString(string s, int n) {
        set<int>v;
        set<string>t;
        for(int i=0;i<s.size();i++){
            string temp;
            for(int j=i;j<i+32&&j<s.size();j++){
                temp+=s[j];
                v.insert(evaluate(temp));
                
            }
            
        }
        int k=1;
        for(auto it:v){
            if(it==k){
                k++;
            }   
        }
        if(k>n){
            return 1;
        }
        return 0;
        
    }
};
