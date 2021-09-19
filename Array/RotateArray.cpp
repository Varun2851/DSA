//RotateArray
#include<iostream>
using namespace std;

void Rotate(int arr[], int temp[] , int n,int d){

	for(int i =0; i<d; i++){  //storing the index value in temp array;
		temp[i] = arr[i];
	}

	for(int i =0; i<n-d; i++){ //shifting the elements in main array
		arr[i] = arr[d+i];
	}

	for(int i = n-d; i<n; i++){
		arr[i] = temp[i-n+d];
	}

	for(int i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    int temp[10];

    int d;
    cin>>d;

    Rotate(arr,temp,n,d);

    return 0;
}