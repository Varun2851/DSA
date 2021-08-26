#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	// insert all element in hashtable
	unordered_map<int,int>h;

	int arr[] = {1,1, 2, 2, 3, 3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(int);

	int count =0;

	for(int i = 0; i<n; i++){
		h[arr[i]]++; 
	}
	//traverse array again and return first element with count 1
	for(int i =0; i<n; i++){
		if(h[arr[i]]==1){
			cout<<arr[i]<<" ";
			count++;
		}
		//cout<<endl;
	}
	cout<<endl;
	cout<<count<<endl;
	return 0;
}