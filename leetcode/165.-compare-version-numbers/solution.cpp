class Solution {
public:
    void listConverter(string version, vector<int>& v) {
         string s;
       for(auto &it: version) {
           if(it == '.') {
               v.push_back(stoi(s));
               s = "";
           }
           else s += it;
       } 
       if(s != "") {
           v.push_back(stoi(s));
       }
    }
    void makeEqual(vector<int>&v1, vector<int>&v2) {
        if(v1.size() > v2.size()) {
            int n = v1.size() - v2.size();
            for(int i = 0; i < n; i++) {
                v2.push_back(0);
            }
        }
        else if(v1.size() < v2.size()) {
            int n = v2.size() - v1.size();
            for(int i = 0; i < n; i++) {
                v1.push_back(0);
            }
        }
    }
    int compareVersion(string version1, string version2) {
       vector<int>v1;
       vector<int>v2;
       listConverter(version1, v1);
       listConverter(version2, v2);
       makeEqual(v1, v2);
       for(int i = 0; i < v1.size(); i++) {
           if(v1[i] > v2[i]) {
               return 1;
           }
           else if(v1[i] < v2[i]) {
               return -1;
           }
       }
       return 0;
    }
};