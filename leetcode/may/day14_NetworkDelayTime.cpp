class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>graph[n+1];
        for(auto it:times){
            graph[it[0]].push_back({it[1],it[2]});    
        }
        vector<int>dis(n+1,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k});//{dis,source}
        dis[k]=0;
        // dijkstra algo
        while(pq.size()>0){
            auto curr = pq.top();
            pq.pop();
            for(auto it:graph[curr.second]){
                if(dis[it.first]>dis[curr.second]+it.second){
                    dis[it.first]=dis[curr.second]+it.second;
                    pq.push({dis[it.first],it.first});
                }
            }
            
        }
        int ans = INT_MIN;
        for(int i=1;i<n+1;i++){
            if(dis[i]==INT_MAX)return -1;
            ans = max(ans,dis[i]);
        }
        return ans;
        
        
    }// 1->2  1
    // shortest time 
    // 
};
