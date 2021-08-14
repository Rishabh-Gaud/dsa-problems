#include <iostream>
using namespace std;

bool isSubsetSum(int set[], int n, int sum)
{

	int dp[n+1][sum+1];
	for (int i = 0; i < n+1; ++i)
	{
		dp[i][0]=1;
	}
	for (int i = 0; i < sum+1; ++i)
	{
		dp[0][i] = 0;
		
	}
	for (int i = 1; i < n+1; ++i)
	{
		for(int j=1;j<sum+1;j++){
			if(set[i-1]<=j){
				dp[i][j] = dp[i-1][j-set[i-1]] || dp[i-1][j];
			}
			else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	return dp[n][sum];
	
}

int main()
{
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
	int set[] = {1,5,11,5};
	int sum = 11;
	int n = sizeof(set) / sizeof(set[0]);
	if (isSubsetSum(set, n, sum) == true)
		cout <<"Found a subset with given sum";
	else
		cout <<"No subset with given sum";
	return 0;
}