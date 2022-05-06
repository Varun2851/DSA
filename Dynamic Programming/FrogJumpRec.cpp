#include<iostream>
using namespace std;

int frogJump(vector<int>stones , int i){
	//Base case
	if(i == 0){
		return 0; //cost of reaching 0th stone is always zero;
	}

	//Recursive case
	int cost = INT_MAX;
	//Way1 
	int op1 = abs(stones[i]-stones[i-1]) + frogJump(i-1);
	//way2
	if(i > 1){
	 int op2 = abs(stones[i]-stones[i-2]) + frogJump(i-2);
	}

	return min(op1,op2);
}

int main(){
	vector<int>stones{10,30,40,50,20};
	int n = stones.size();

	int ans = frogJump(stones,n);
	cout<<ans;
	return 0;
}