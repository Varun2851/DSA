#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){

	int s = 0;
	int e = n-1;

	while(s<=e){
		int mid = (s+e)/2;

		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid]<key){
			s = mid+1;
		}
		else{
			e = mid-1;
		}
	}
	return -1;
}

int BSRecursive(int *a,int s,int e,int key){
	// base case
	if(s>e){
		return -1;
	}
	// recursive case
	int mid = (s+e)/2;
	if(a[mid] == key){
		return mid;
	}
	else if(key>a[mid]){
		return BSRecursive(a,mid+1,e,key);
	}
	else{// key<a[mid]
		return BSRecursive(a,s,mid-1,key);
	}
}

bool LinearSearch(int *arr,int key,int n){

	for(int i = 0; i<n; i++){
		if(arr[i] == key){
			return true;
		}
	}
	return false;
}

int main(){

	int arr[] = {5,-1,6,-7,8,1,3};
	int n = sizeof(arr)/sizeof(int);

	int ans = LinearSearch(arr,key,n);

	if(ans == 1){
		cout<<"key found in the array"<<endl;
	}
	else{
		cout<<"key does not exist in the array"<<endl;
	}
	return 0;

}