#include<iostream>
using namespace std;

int solve(int n , int k , int dp[1000]){

	//base case
	if(n == 0){
		return  dp[n] = 1;
	}

	if(n < 0){
		return  0;
	}
	//check before calculating
	if(dp[n] != -1){
		return dp[n];
	}
	//recursive case
	int ans = 0;
	for(int jump  = 1; jump<=k; jump++){
		ans  += solve(n-jump , k , dp);
	}
	//Save before return
	dp[n] =  ans;
	return ans;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;

	int k ;
	cin>>k;

	int dp[10000];
	memset(dp,-1,sizeof(dp));

	cout<<solve(n , k , dp)<<endl;
	return 0;
}