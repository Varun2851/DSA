#include<bits/stdc++.h>
using namespace std;

int editDistance(string s, string t, int dp[1000][1000]){

	int m = s.size();
	int n = t.size();

	//fill ith row
	for(int j = 0; j<=m; j++){
		dp[0][i] = j;
	}

	//fill ith column
	for(int i = 0; i<=n; i++){
		dp[i][0] = i;
	}

	//fill other cell
	for(int i = 1; i<=m; i++){
		for(int j =1; j<=n; j++){
			if(s[m-i] == t[n-j]){
				dp[i][j] = dp[i-1][j-1];
			}
			else{
				int a = dp[i-1][j];
				int b = dp[i-1][j-1];
				int c = dp[i][j-1];

				dp[i][j] = min(a,min(b,c));
			}
		}
	}
	return dp[m][n];
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string s;
	string t;
	cin>>s;
	cin>>t;

	int dp[1000][1000];
	//memset(dp,-1, sizeof(dp));
	cout<<editDistance(s , t)<<endl;
	return 0;
}
