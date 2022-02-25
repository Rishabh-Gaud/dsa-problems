class Solution {
public:
    int compareVersion(string v1, string v2) {
        vector<int>r1,r2;
        v1+=".";
        v2+=".";
        int sum=0;
        for(int i=0;i<v1.size();i++){
            if(v1[i]!='.'){
                sum = sum*10+(v1[i]-'0');
            }else{
                r1.push_back(sum);
                sum=0;
            }
        }
        
        for(int i=0;i<v2.size();i++){
            if(v2[i]!='.'){
                sum = sum*10+(v2[i]-'0');
            }else{
                r2.push_back(sum);
                sum=0;
            }
        }
        if(r1.size()>r2.size()){
            int x = r1.size()-r2.size();
            for(int i=0;i<x;i++)
            r2.push_back(0);
        }
        
        if(r2.size()>r1.size()){
            int x = r2.size()-r1.size();
            for(int i=0;i<x;i++)
            r1.push_back(0);
        }
        for(int i=0;i<r1.size();i++){
            if(r1[i]>r2[i])return 1;
            if(r1[i]<r2[i])return -1;
        }
        return 0;
    }
};











