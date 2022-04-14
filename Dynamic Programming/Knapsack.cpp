#include<iostream>
using namespace std;

int knapsack(int Capacity, int *values , int *weight , int n){

	//base case
	if(n == 0 || Capacity == 0){
		return 0;
	} 
	int x = INT_MIN;
	int y = INT_MIN;
	//recursiive case
	//1.Include
	if(Capacity >= weight[0]){

		x = values[0] + knapsack(Capacity-weight[0] , values+1 , weight+1,n-1);

	}
	//2.Exclude

    	 y = knapsack(Capacity , values+1, weight+1, n-1);

	return max(x , y);
}

int knapsackMemo(int Capacity, int *values , int *weight , int n , int dp){


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n = 3;
	int Capacity = 50;
	int values[] = {60,100,120};
	int weight[] = {10,20,30};

	cout<<knapsack(Capacity ,values,weight,n)<<endl;
	return 0;
}
