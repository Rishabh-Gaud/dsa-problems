#include <iostream>
#include<vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int LIS(int a[],int n){
	int * output = new int [n];
	output[0]=1;
	for (int i = 1; i < n; ++i)
	{
		output[i]=1;
		for(int j =i-1;j>=0;--j){
			if(a[i]<a[j]){
				continue;
			}
			int posans = 1+output[j];
			if(posans>output[i]){
				output[i]=posans;
			}

		}			
	}
	int best=0;;
	for (int i = 0; i < n; ++i)
	{
		best= max(best,output[i]);
	}
	return best;
	
}


int main()
{
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
	int n;
	cin>>n;

	int * a = new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<LIS(a,n);
	delete [] a;
	return 0;
}