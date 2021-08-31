#include<iostream>
using namespace std ;

//Brute force approach O(N^3)

int largest_sum = INT_MIN;

int Subarrays(int arr[] , int n){

	
	for(int i =0; i<n; i++){
		for(int j =i; j<n; j++){
			int Subarray_sum = 0;
			for(int k = i; k<=j; k++){
				cout<<arr[k]<<" ";
				Subarray_sum += arr[k];
			}
			cout<<endl;
			if(Subarray_sum>largest_sum){
				largest_sum = Subarray_sum;
			}
		}
	}
	return largest_sum;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(int);

	Subarrays(arr,n);
	cout<<"Largest Subarrays Sum is :"<<largest_sum<<endl;

	return 0;
}