#include<iostream>
using anmespace std;

bool triplet(int arr , int n , int x){
	//We will use two pointer approach it will reduce our time complixity to O(N)

	//1. Sort the array

	sort(arr , arr+n);

	//2. Use two pointer technique
	for(int i = 0; i<n; i++){
		int y = x-arr[i];
		//2 pointer
		int low = i+1;
		int high = n-1;

		while(low < high){
     		//3.if else condition 
     		if(arr[low]+arr[high] == y){
     			return 1;
     		}
     		else if(arr[low]+arr[high] > y){
     			high--;
     		}
     		else if(arr[low]+arr[high] < y){
     			low++;
     		}
		}
	}
	return 0;
}

int main(){

	int arr[] = {1 4 45 6 10 8};
	int n = sizeof(arr)/sizeof(int);

	int x;
	cin>>x;

	return 0;

}