
#include<bits/stdc++.h>
using namespace std;

int visited[100];
vector<int>adj[8];
void addEdge(vector<int>adj[],int u,int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
 void bfs(int src){

    visited[src]=1;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(auto i:adj[node]){
            if(visited[i]==0){
                q.push(i);
                visited[i]=1;
            }
        }
    }
 }


int main(){
    memset(visited,0,sizeof(visited));
    addEdge(adj,1,2);
    addEdge(adj,4,2);
    addEdge(adj,4,7);
    addEdge(adj,3,1);
    addEdge(adj,3,7);
    addEdge(adj,6,5);
    for(int i=1;i<8;i++){
        if(visited[i]==0){
            bfs(i);
        }
    }
    return 0;
}
