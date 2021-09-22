#include<iostream>
using namespace std;

int findZeroes(int n){
	if(n<0){
		return -1;
	}
	int count = 0;
	//keep dividing n by power of 5 and update count 
	for(int i =5; n/i>=1; i= i*5){
		count = count + n/i;
	}
	return count;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n = 100;
	cout<<"Count of trailing 0s in"<<100<<"! is"<<findZeroes(n);

	return 0;
}