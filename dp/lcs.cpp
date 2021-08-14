#include <iostream>
#include<vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;


int lcsI(string s1,string s2){
	int m = s1.size();
	int n = s2.size();
	int** dp = new int*[m+1];
	for (int i = 0; i < m+1; ++i)
	{
		dp[i] = new int[n+1];		
	}
	for (int i = 0; i <= m; ++i)
	{
		dp[i][0] = 0;
	}
	for (int i = 0; i <= n; ++i)
	{
		dp[0][i] = 0;
	}
	for (int i = 1; i <= m; ++i)
	{
		for(int j=1;j<= n;j++){

	if(s1[m-i]==s2[n-j]){
		dp[i][j] = 1+dp[i-1][j-1];
	}
	else
	{
		dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
	}
		}
	}


	int ans= dp[m][n];
	for (int i = 0; i <= m; ++i)
	{
		delete [] dp[i];
	}
	delete [] dp;
	return ans;

}

int lcs2Helper(string s1,string s2,int ** dp){
	int ans;
if(s1.size()==0||s2.size()==0)return 0;
	if(dp[s1.size()][s2.size()]!=-1){
		return dp[s1.size()][s2.size()];
	}

	if(s1[0]==s2[0])ans= 1+lcs2Helper(s1.substr(1),s2.substr(1) ,dp);
	else{
		int op1 = lcs2Helper(s1,s2.substr(1) ,dp);
		int op2 = lcs2Helper(s1.substr(1),s2,dp);
		ans= max(op1,op2);
	}
	dp[s1.size()][s2.size()] = ans;
	return ans;
}
int lcs2(string s1,string s2){
	int m = s1.size();
	int n = s2.size();
	int** dp = new int*[m+1];
	for (int i = 0; i < m+1; ++i)
	{
		dp[i] = new int[n+1];
		for(int j=0;j<= n ; j++){
			dp[i][j] =-1;
		}
	}
	int ans = lcs2Helper(s1,s2,dp);
	for (int i = 0; i <= m; ++i)
	{
		delete [] dp[i];
	}
	delete [] dp;
	return ans;
}

int main()
{
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 

	string a,b;
	cin>>a>>b;
	cout<<lcsI(a,b);
	return 0;
}