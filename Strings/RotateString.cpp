#include<iostream>
using namespace std;

int length(char *arr){
	int count = 0;
	for(int i =0; arr[i] != '\0'; i++){
		count++;
	}
	return count;
}

void Rotate(char*arr ,int n){

	int arr_length = length(arr);

	for(int i = arr_length-1; i>=0; i--){
		arr[n+i] = arr[i];  // shifting all the character n times 
	}
	int i =0; int j = arr_length;
	for(int k =0; k<n; k++){
		arr[i] = arr[j];
		i++;
		j++;
	}
	arr[arr_length] = '\0'; // inserting null
} 
	
int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	char arr[100];
	cin>>arr;

	Rotate(arr,n);

	cout<<arr<<endl;

	return 0;
}