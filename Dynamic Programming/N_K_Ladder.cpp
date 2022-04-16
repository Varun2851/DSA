#include<iostream>
using namespace std;

int solve(int n , int k){

	//base case
	if(n == 0){
		return 1;
	}

	if(n < 0){
		return 0;
	}

	//recursive case
	int ans = 0;
	for(int jump  = 1; jump<=k; jump++){
		ans  += solve(n-jump , k);
	}
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

	cout<<solve(n , k)<<endl;
	return 0;
}