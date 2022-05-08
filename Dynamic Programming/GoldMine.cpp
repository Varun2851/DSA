
// https://www.geeksforgeeks.org/gold-mine-problem/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int GoldCollectd(vector<vector<int>>gold , int m , int n , int i , int j){

    if( i == m or j == n){
        return 0;
    }

    if(i < 0){
        return 0;
    }

	// recursive case
	// Top right diagonal
	int op1 = GoldCollectd(gold , m , n , i-1, j+1);

	// right 

	int op2 = GoldCollectd(gold , m , n , i , j+1);

	// down right diagonal

	int op3 = GoldCollectd(gold , m ,n , i+1 , j+1);

	return gold[i][j] + max(op1,max(op2, op3));
}

int solve(vector<vector<int>>gold , int m , int n){

	int maxGold = 0;

	for(int i = 0; i<m; i++){
		// recursively check for every row 
		int Gold = GoldCollectd(gold , m , n , i , 0);
		maxGold = max(maxGold , Gold);
	}
	return maxGold;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<vector<int>> gold { {1, 3, 1, 5},
        {2, 2, 4, 1},
        {5, 0, 2, 3},
        {0, 6, 1, 2}
    };

    int m = 4; //Rows
    int n = 4; //column

    cout<<solve(gold, m ,n)<<endl;
    return 0;
}

