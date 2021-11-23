#include<bits/stdc++.h>
using namespace std;

int visited[100];
vector<int>adj[8];

void addEdge(vector<int>adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void dfs(int src){
	cout<<src<<" ";
	visited[src]=1;
	for(auto i:adj[src]){
		if(visited[i]==0){
			dfs(i);
		}
	}
}


int main(){
	addEdge(adj,1,2);
	addEdge(adj,2,4);
	addEdge(adj,4,6);
	addEdge(adj,6,7);
	addEdge(adj,7,2);
	addEdge(adj,3,5);
	for(int i=1;i<=7;i++){
		if(visited[i]==0){
			dfs(i);
		}
	}
	return 0;
}