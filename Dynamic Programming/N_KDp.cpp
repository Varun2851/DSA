#include<bits/stdc++.h>
using namespace std;

int countwaysDp(int n , int k){
	vector<int>dp(n+1 , 0);
	dp[0] = 1;
	for(int i = 1; i<=n; i++){
		for(int jump = 1; jump<=k; jump++){
			if(i-jump >= 0){
				dp[i] += dp[i - jump];
			}
		}
	}
	return dp[n];
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	int k;
	cin>>k;
	int ans = countwaysDp(n,k);
	cout<<ans<<endl;
	return 0;
}