#include<iostream>
using namespace std;

int solve(int l , int r, int*price , int day ){
    //base case
    if(l>r){
        return 0;
    }
    //recursive case
    int op1 = day*price[l] + solve(l+1,r,price,day+1);
    int op2 = day*price[r] + solve(l ,r-1,price,day+1);

    return max(op1,op2);
}
int topDown(int l, int r, int*price,int day,int dp[][100]){
    //base case
    if(l>r){
        return dp[l][r] = 0; //return se pahalai store
    }
    if(dp[l][r] != -1){
        return dp[l][r];  // calculate se pahalai check
    }
    //recursive case
    int op1 = day*price[l] + topDown(l+1,r,price,day+1 , dp);
    int op2 = day*price[r] + topDown(l ,r-1,price,day+1, dp);

    return dp[l][r] = max(op1,op2);
}
int BottomUp()
int main(){
    int price[] = {2,3,5,1,4};
    int n = sizeof(price)/sizeof(int);
    int dp[100][100] = {0};
    for(int i =0; i<100; i++){
        for(int j =0; j<100; j++){
            dp[i][j] = -1;
        }
    }

    cout<<solve(0,n-1,price,1);
    cout<<endl;
    cout<<topDown(0,n-1,price,1,dp);

    return 0;
}
