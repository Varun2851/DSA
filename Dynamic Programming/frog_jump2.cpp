#include<iostream>
using namespace std;

int frogJump(vector<int>stones , int k){

	vector<int>dp(n+1 , 0);

	for(int i = 0; i<n; i++){
		dp[i] = INT_MAX;
	}

	for(int i = 0; i<n; i++){
		for(int j = i+1; j<= i+k; j++){
			if(j < n){
				dp[j] = min(dp[i] , dp[j] + abs(stones[j] - stones[i]));
			}
		}
	}
	return dp[n-1];
}

int main(){

	vector<int>stones{10,30,40,50,20};
	int k = 3;
	int n = stones.size();
	int ans = frogJump(stones,k);
	return 0;
}