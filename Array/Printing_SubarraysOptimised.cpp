//Prefix Sum Approach O(N^2)
#include<iostream>
using namespace std;

int largestSubarraySum(int arr[] , int n){

	//Prefix sum
	int Prefix[100] = {0};
	Prefix[0] = arr[0];

	for(int i = 1; i<n; i++){    
		Prefix[i] = Prefix[i-1]+arr[i];
	}

	//largest sum logic
	int largest_sum = 0;
	for(int i =0; i<n; i++){
		for(int j =i; j<n; j++){
			int SubarraySum = i>0 ? Prefix[j] - Prefix[i-1] :Prefix[j]; //Terniary  operator
			largest_sum = max(largest_sum , SubarraySum); 
		}

	}
	return largest_sum;
}
int main(){

 	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[] {1 ,-3,9,-10,5};
	int n = sizeof(arr)/sizeof(int);
	cout<<"Largest Sum of Subarray is :"<<largestSubarraySum(arr,n)<<endl;

	return 0;
}