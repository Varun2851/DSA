#include<bits/stdc++.h>
using namespace std;

int topdown(int*coins , int amount, int n, int*dp){
	//base case
	if(amount == 0){
		return 0;
	}
	//Check before calculating 
	if(dp[i] != -1){
		return dp[i];
	}

	//Recursive case

	int ans = INT_MAX; // we will compare our chota ans with ans to get minimum no. of coins

	for(int i = 0; i<n; i++){
		if(amount-coins[i] >= 0){
			int chotaAmount = amount-coins[i];
			int chotaAns = topdown(coins,chotaAmount,n,dp);
			if(chotaAns < INT_MAX and chotaAns < ans){
				ans = chotaAns+1;
			}
		}
	}
	return ans;
}

int bottomup(coins,)

int main(){

	int coins[] = {1,3,5,10};
	int n = sizeof(coins)/sizeof(int);
	int amount;
	cin>>amount;
	int dp[100000];
	memset(dp,-1,sizeof(dp));
	cout<<topdown(coins,amount,n,dp)<<endl;
	cout<<endl;

}