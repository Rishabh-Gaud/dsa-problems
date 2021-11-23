
#include<bits/stdc++.h>
using namespace std;

int visited[100];
vector<int>adj[8];
void addEdge(vector<int>adj[],int u,int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
 bool bfs(int src){

    visited[src]=0;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        
        for(auto i:adj[node]){
            if(visited[i]==-1){
                q.push(i);
                visited[i]=visited[node]==0?1:0;
                cout<<visited[i]<<" ";
            }else if(visited[i]==visited[node])return false;
        }
    }
    return true;
 }


int main(){
    memset(visited,-1,sizeof(visited));
    addEdge(adj,1,2);
    addEdge(adj,4,2);
    addEdge(adj,4,7);
    addEdge(adj,3,1);
    addEdge(adj,3,7);
    addEdge(adj,5,7);
    for(int i=1;i<8;i++){
        if(visited[i]==-1){
            if(!bfs(i)){
                cout<<"false";
                return 0;
            }
        }
    }
    cout<<"true";
    return 0;
}
