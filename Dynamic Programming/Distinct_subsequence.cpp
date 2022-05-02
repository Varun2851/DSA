//DistinctSubsequences
#include<iostream>
using namespace std;

int solve(string s1, string s2 , int i , int j){
	//base case
	if((i == -1 and j == -1) or j == -1){
		return 1;
	}
	if(i == -1){
		return 0;
	}

	//Recursive case
	if(s1[i] == s2[j]){
		return solve(s1,s2,i-1,j-1) + solve(s1,s2,i-1,j);
	}
	else{
		return solve(s1,s2,i-1,j);
	}
}


////////////////////////////////////////////////Memorisation///////////////////////////////////////

int solve_topdown(string s1, string s2 , int i , int j , int dp[1000][1000]){

	//Base Case
	if((i == -1 and j == -1) or j == -1){
		return   1;
	}
	if(i == -1){
		return   0;
	}
	//check before calculate
	if(dp[i][j] != -1){
		return dp[i][j];
	}

	//recursive case
	if(s1[i] == s2[j]){
		return dp[i][j] = solve_topdown(s1,s2,i-1,j-1,dp) + solve_topdown(s1,s2,i-1,j,dp);
	}
	else{
		return dp[i][j] = solve_topdown(s1,s2,i-1,j,dp);
	}
}

////////////////////////////////////////////Bottom Up Approach///////////////////////////////////

int BottomUp(string s1,string s2){
	int m = s1.size();
	int n = s2.size();

	vector<vector<int>>dp(m+1,vector<int>(n+1,0));

	for(int i = 0; i<=m; i++){
		dp[i][0] = 1;
	}

	for(int i = 1; i<=m; i++){
		for(int j = 1; j<=n; j++){
			if(s1[i-1] == s2[j-1]){
				dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
			}
			else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	return dp[m][n];
}


int main(){
	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
	int dp[1000][1000];
	memset(dp,-1,sizeof(dp));
	cout<<solve(s1,s2,s1.size()-1,s2.size()-1)<<endl;
	cout<<solve_topdown(s1,s2,s1.size()-1,s2.size()-1,dp);
	cout<<BottomUp(string s1 , string s2);

	return 0;
}
