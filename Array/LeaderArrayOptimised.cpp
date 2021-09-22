#include<iostream>
using namespace std;

void leader(int arr[] , int n){
	int current_leader = arr[n-1]; // last element will always be a leader.
	cout<<current_leader<<" ";
	for(int i = n-2; i>=0; i--){
		if(current_leader < arr[i]){
			current_leader = arr[i];
			cout<<current_leader<<" "; // this method will print in increasing order .
		}
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[] = {7,10,4,3,6,5,0};
	int n = sizeof(arr)/sizeof(int);

	leader(arr,n);
	return 0;
}