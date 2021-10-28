#include<iostream>
using namespace std;

int RecBinarySarch(int *arr , int s, int e, int key)
{
	// Base case
	if(s > e){
		return -1;
	}
	
	//Recursive way
		int mid = (s+e)/2;

		if(key == arr[mid]){
			return mid;
		}
		else if(key > mid){
			return RecBinarySarch(arr , s+1 , e , key);
		}
		else{
			return RecBinarySarch(arr , s , e-1 , key);
		}
	
	
}

void BinarySarch(int *arr , int n , int key)
{
	// Normal iterative way
	int s = 0;
	int e = n-1;
	

	while(s <= e){
		int mid = (s+e)/2;

		if(arr[mid] == key){
			cout<<"key found at index :"<<mid<<endl;
			break;
		}
		else if( key > arr[mid]){
			s = mid+1;
		}
		else{
			e = mid-1;
		}
	}
	if(s > e){
		cout<<"key not found :"<<endl;
	}
}

int main()
{   

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif

	int arr[] = {1,3,5,7,9,11};
	int n = sizeof(arr)/sizeof(int);

	int key;
	cin>>key;

	//BinarySarch(arr , n , key);

	int ans = RecBinarySarch(arr , 0 , n-1 , key);

	if(ans == -1){
		cout<<"Key not found"<<endl;
	}
	else{
		cout<<"Key found at index :"<<ans<<endl;
	}

	cout<<endl;
	return 0;
}