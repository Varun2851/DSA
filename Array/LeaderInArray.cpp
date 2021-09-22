//Naive approach
#include<iostream>
using namespace std;

void Leader(int arr[] , int n){
	int j;
	for(int i =0; i<n; i++){
		//bool flag = false;
		for( j = i+1; j<n; j++){
			if(arr[i] <= arr[j]){
				//flag = true;
				break;
			}
		}
		if(j == n){
			cout<<arr[i]<<" ";
		}
		// if(flag == false){
		// 	cout<<arr[i]<<" ";
		// }
	}
}
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[] = {7,10,4,3,6,5,0};
	int n = sizeof(arr)/sizeof(int);

	Leader(arr,n);
	return 0;
}