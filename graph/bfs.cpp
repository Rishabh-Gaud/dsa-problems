#include<bits/stdc++.h>
using namespace std;

	void addedge(vector<int>adj[],int u,int v){
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	void bfs(vector<int>adj[],int V){
		bool visited[V+1];
		for(auto i:visited){
			i=0;
		}
		queue<int>q;
		int s=1;
		q.push(s);
		visited[s]=1;
		
		while(!q.empty()){
			int node = q.front();

			q.pop();
		cout<<node<<" ";
			for(int i=0;i<adj[node].size();i++){
				if(visited[adj[node][i]]==false){
					visited[adj[node][i]]=1;
					q.push(adj[node][i]);
				}
			}
		}

	}


int main(){
	int V=6;
	vector<int>adj[V+1];
	addedge(adj,1,2);
	addedge(adj,1,3);
	addedge(adj,4,2);
	addedge(adj,5,2);
	addedge(adj,3,4);
	addedge(adj,3,5);
	addedge(adj,5,6);
	bfs(adj,V);
	// for(auto i:adj){
	// 	for(auto j:i){
	// 		cout<<j<<" ";
	// 	}
	// 	// cout<<endl;
	// }
	return 0;
}
