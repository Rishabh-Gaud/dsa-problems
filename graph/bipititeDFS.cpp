
#include<bits/stdc++.h>
using namespace std;

int visited[100];
vector<int>adj[8];
void addEdge(vector<int>adj[],int u,int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

bool dfs(int src){

    for(auto i:adj[src]){
        if(visited[i]==-1){
            visited[i] = visited[src]==0?1:0;
            dfs(i);
        }else if(visited[i]==visited[src])return false;
    }
    return true;


}

int main(){
    memset(visited,-1,sizeof(visited));
    addEdge(adj,1,2);
    addEdge(adj,4,2);
    addEdge(adj,4,7);
    addEdge(adj,3,1);
    addEdge(adj,3,5);
    addEdge(adj,5,7);
    visited[1]=0;
    if(!dfs(1)){
        cout<<"false";
        return 0;
    }
    cout<<"true";
    return 0;
}
