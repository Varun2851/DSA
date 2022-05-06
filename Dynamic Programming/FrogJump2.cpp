#include<bits/stdc++.h>
using namespace std;

int frogJump2(vector<int>&stones , int i, int k){

	//base case
	if(i == 0){
		return 0;
	}

	int cost = INT_MAX;

	//Recursive case
	for(int j = 1; j<=k; j++){
		if(i-j >= 0){
			cost = min(cost , abs(stones[i] - stones[i-j]) + frogJump2(stones , i-j , k));

		}
	}

	return cost;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int>stones{10, 30, 40, 50, 20};
	int k = 3;
	int n = stones.size();

	int  ans = frogJump2(stones,n-1,k);

	cout<<ans<<" ";
	return 0;
}