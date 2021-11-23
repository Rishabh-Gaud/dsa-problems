#include<bits/stdc++.h>
using namespace std;

vector<int>adj[12];
int visited[100];
void addEdge(vector<int>adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool cycleDetectionBfs(int src){
	queue<pair<int,int>>q;
	q.push({src,-1});
	visited[src]=1;
	while(!q.empty()){
		pair<int,int> node = q.front();
		q.pop();
		for(auto i:adj[node.first]){
			if(visited[i]==0){
				q.push({i,node.first});
				visited[i]=1;
			}else if(node.second!=i){
				return true;
			}
		}
	}
	return false;
}


int main(){
	memset(visited,0,sizeof(visited));
	addEdge(adj,1,2);
	addEdge(adj,2,4);
	addEdge(adj,3,5);
	addEdge(adj,5,6);
	addEdge(adj,6,7);
	addEdge(adj,5,10);
	addEdge(adj,7,8);
	addEdge(adj,8,11);
	addEdge(adj,8,9);
	addEdge(adj,10,9);
	for(int i=1;i<12;i++){
		if(visited[i]==0){
			if(cycleDetectionBfs(i)){
				cout<<1<<endl;
				return 0;
			}
		}
	}
	cout<<"false"<<endl;
	return 0;
}