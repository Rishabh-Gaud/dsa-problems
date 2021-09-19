#include<bits/stdc++.h>
using namespace std;

	vector<int>adj[8];
	void addedge(vector<int>adj[],int u,int v){
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<bool>visited(100);
	
void dfs(int v) {
    visited[v] = true;
    cout<<v<<" ";
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}


int main(){
	int V=6;
	addedge(adj,1,2);
	addedge(adj,2,7);
	addedge(adj,2,4);
	addedge(adj,4,6);
	addedge(adj,6,7);
	addedge(adj,3,5);
	// addedge(adj,,6);
	for(int i=1;i<8;i++){
		dfs(i);
		cout<<endl;
	}
	// for(auto i:adj){
	// 	for(auto j:i){
	// 		cout<<j<<" ";
	// 	}
	// 	cout<<endl;
	// }
	return 0;
}
