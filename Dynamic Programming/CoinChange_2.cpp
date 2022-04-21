//Coin change 2
#include<bits/stdc++.h>
using namespace std;

int CoinChangeWays(int arr[] , int target , int dp[100][100] , int indx){

	//Base case
	if(indx == 0){
		return (target%arr[0] == 0);
	}

	//check before calculate 
	if(dp[indx][target] != -1){
		return dp[indx][target];
	}

	//recursive case

	int exclude = CoinChangeWays(arr , target , dp , indx-1);
	int include = 0;

	if(arr[indx] <= target){
		 include = CoinChangeWays(arr , target - arr[indx] , dp , indx); // we can include the coin until our target is not form
	}

	//Save before return 

	return dp[indx][target] = include+exclude;

}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[] = {1,2,3};
	int n = sizeof(arr)/sizeof(int);
	int target = 4;

	int dp[100][100];
	memset(dp,-1,sizeof(dp));

	cout<<CoinChangeWays(arr , target , dp , n-1)<<endl;
	
	return 0;

}
