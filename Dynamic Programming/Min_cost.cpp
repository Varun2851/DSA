#include<bits/stdc++.h>
using namespace std;

int min_cost(int cost[3][3] , int m , int n, int i, int j){
	//base case
	if(i == m-1 and j == n-1){
		return cost[i][j];
	}

	if(i >= m or j >= n){
		return INT_MAX;
	}

	//recursive case

	int x = min_cost(cost , m ,n, i , j+1);
	int y = min_cost(cost , m ,n, i+1,j+1);
	int z = min_cost(cost , m, n , i+1, j);

	// some calculations

	int ans = min(x,min(y,z)) + cost[i][j];
	return ans;
}

int main(){

	int cost[3][3] = {
		{1,3,3},
		{2,1,4},
		{0,6,4},
		
	};

	cout<<min_cost(cost , 3 , 3 , 0 , 0);
	return 0;

}