#include<iostream>
using namespace std;
int dp[1001][1001];

int Gridways(int rows,int colm){
	//base case
	if(dp[0][0] == -1){
		return 0;
	}
	//Compute the number of ways for 1st row 
	for(int j = 0; i<colm; j++){
		if(dp[0][j] == -1){
			break;
		}
		else{
			dp[0][j] = -1;
		}
	}
	//Compute the number of ways for 1st colm
	for(int i = 0; i<rows; i++){
		if(dp[i][0] == -1){
			break;
		}
		else{
			dp[i][0] = -1;
		}
	}
	// Bottom Up 
	for(int i = 1; i<rows; i++){
		for(int j = 1; j<colm; j++){
			//If cell is blocked , leave it
			if(dp[i][j] == -1){
				continue;
			}
			dp[i][j] = 0;

			if(dp[i][j-1] != -1){
				dp[i][j] = dp[i][j-1];
			}
			if(dp[i-1][j] != -1){
				dp[i][j] = dp[i][j-1] + dp[i-1][j];
			}
		}
	}
	//Check for the final cell
	if(dp[row-1][colm-1] == -1){
		return 0;
	}
	return dp[rows-1][colm-1];
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	memset(dp,0,sizeof(dp));

	int M , N , P; // M = no. of rows , N = no. of columns , P = blocked cells 
	cin>>M>>N>>P;

	// Marked blocked cells -1
	for(int i = 0; i<P; i++){
		int X,Y; //Co-ordinate of blocked cells 
		cin>>X>>Y;
		dp[X-1][Y-1] = -1; //Mark blocked cells as -1
	}

	cout<<Gridways(M,N)<<endl;
	return 0;
}