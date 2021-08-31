#include<iostream>
using namespace std;
// O(N) , does not take any extra space 
int maximumSubarraySun(int arr[] , int n){
	int cs = 0;
	int largest = 0;

	for(int i =0; i<n; i++){
		cs = cs+arr[i];
		if(cs<0){
			cs = 0;
		}
		largest = max(largest,cs);
	}
	return largest;
}
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[]  = {-2,-3,-4,-1,-5,-12,-6,-1,-3};
	int n = sizeof(arr)/sizeof(int);

	cout<<maximumSubarraySun(arr,n)<<endl;

	return 0;
}