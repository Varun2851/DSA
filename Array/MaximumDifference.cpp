#include<iostream>
using namespace std;

int max_diff(int arr[] , int n){
	int result = arr[1] - arr[0];
	for(int i = 0; i<n-1; i++){
		for(int j = i+1; j<n; j++){     //O(N^2)
			result = max(result , arr[j]-arr[i]);
		}
	}
	return result ;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[] = {2,3,10,6,4,8,1};
	int n = sizeof(arr)/sizeof(int);

	cout<<max_diff(arr , n);

	return 0;
}