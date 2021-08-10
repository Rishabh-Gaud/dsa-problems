#include <iostream>
using namespace std;
int maze(int s,int i,int j){
	if(i==s-1&&j==s-1){
		return 1;
	}
	if(i>=s||j>=s){
		return 0;
	}
	return maze(s,i+1,j)+maze(s,i,j+1);
}
int countPaths(int s,int e){
	if(s==e)return 1;
	if(s>e)return 0;
	int count =0;
	for (int i = 1; i <= 6; ++i)
	{
		count+=countPaths(s+i,e);
	
	}
	return count;
}


int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
	cout<<maze(3,0,0);
	return 0;
}