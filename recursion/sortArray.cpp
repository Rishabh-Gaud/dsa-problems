#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>&v,int temp){

	if(v.size()==0 || v[v.size()-1]<=temp){v.push_back(temp);
		return;
	}

	int t = v[v.size()-1];
	v.pop_back();
	insert(v,temp);
	v.push_back(t);
}

void sorted(vector<int> &v){
	if(v.size()==1)return;
	int temp =v[v.size()-1];
	 v.pop_back();
	sorted(v);
	insert(v,temp);
	return ; 
}


int main()
{
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
	vector<int>v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(14);
	v.push_back(2);
	v.push_back(35);
	v.push_back(6);
	sorted(v);
	for(int i =0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}