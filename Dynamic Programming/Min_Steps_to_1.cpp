#include<iostream>
using namespace std;

int solve(int n){
	//base case
	if(n == 1){
		return 0;
	}
	//recursive case 
	int op1 , op2, op3 = INT_MAX;
	if(n >= 2){
		op1 = solve(n-1);
	}
	if(n%2 == 0){
		op2 = solve(n%2);
	}
	if(n%3 == 0){
		op3 = solve(n%3);
	}

	int ans = min(op1,(op2,op3));

	return ans;
}
int topdown(int n){

	//base case
	if(n == 1){
		return dp[n] = 0;
	}
	//check
	if(dp[n] != -1){
		return dp[n];
	}

	int op1, op2, op3 = INT_MAX;

	if(n>=2){
		op1 = topdown(n-1);
	}

	if(n%2 == 0){
		op2 = topdown(n/2);
	}

	if(n%3 == 0){
		op3 = topdown(n/3);
	}

	return dp[n] = min(op1,min(op2,op3)) +1;
}
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int dp[100000];
	memset(dp , -1 , sizeof(dp));
	int MinimumSteps = solve(n);

	cout<<MinimumSteps<<endl;
	cout<<topdown(n)<<endl;
	return 0;
}