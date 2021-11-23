#include<bits/stdc++.h>
using namespace std;

	vector<int>adj[7];
bool visited[100+1];
void addEdge(vector<int>adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void DFS(int u){
	visited[u]=1;
	cout<<u<<" ";
	for(auto v:adj[u]){
		if(visited[v]==false){
			visited[v]=1;
			DFS(v);
		}
	}
}
void bfs(vector<int>adj[],int v){
	
	queue<int>q;
	q.push(1);
	visited[1]=1;
	while(!q.empty()){
		int node = q.front();
		q.pop();
		cout<<node<<" ";
		for(int i=0;i<adj[node].size();i++){
			if(visited[adj[node][i]]==false){
				q.push(adj[node][i]);
				visited[adj[node][i]]=1;
			}
		}
	}
}


int main(){
	// addEdge(adj,1,3);
	// addEdge(adj,2,4);
	// addEdge(adj,2,5);
	addEdge(adj,3,2);
	addEdge(adj,0,1);
	addEdge(adj,0,2);


	addEdge(adj,1,2);
	// for(int i=1;i<7;i++){
	// 	cout<<i<<"-> : ";
	// 	for(auto j:adj[i]){
	// 		cout<<j<<" ";
	// 	}
	// 	cout<<endl;
	// }
	DFS(0);
	

	return 0;
}