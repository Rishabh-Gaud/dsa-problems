//solution 1:
class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
          priority_queue<int>pq;
         for(int i=0;i<m.size();i++){
             for(int j=0;j<m[0].size();j++){
                 pq.push(m[i][j]);
                 if(pq.size()>k)pq.pop();
                
             }
         }
         return pq.top();
    }
};
//solution 2
class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        int l=m[0][0];
        int ans=0;
        int r=m[m.size()-1][m[0].size()-1];
        while(l<=r){
            int mid = l+(r-l)/2;
            if(lessEqual(m,mid)>=k){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
    int lessEqual(vector<vector<int>>& m, int x){
        int cnt=0;
        int c=m[0].size()-1;
        for(int i=0;i<m.size();i++){
            while(c>=0&&m[i][c]>x)c--;
            cnt+=(c+1);
        }
        return cnt;
        
    }
};
