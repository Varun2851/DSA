#include<iostream>
#include<vector>
using namespace std ;

int highestMountain(vector<int>arr){
	int n = arr.size();

	int largest = 0;

	//we are starting from 1 because 1st element can't be peak and we are going to 2nd last element 
	// because last element also can't be peak;

	for(int i = 1; i<=n-2;){  

		//Check arr[i] is peak or not
		if(arr[i] > arr[i-1] and arr[i] > arr[i+1]){
			// we will do some work
			int cnt = 1;
			int j = i;
			//cnt backward(left)
			while(j>=1 and arr[j]>arr[j-1]){
				j--;
				cnt++;
			}
			//cnt forward(right)
			while(i<=n-2 and arr[i]>arr[i+1]){
				i++;
				cnt++;
			}
			largest = max(largest,cnt);
		}
		else{
			//we will skip that element 
			i++;
		}

	}
	return largest;
}
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> arr{2,1,4,7,3,2,5};
	cout<<highestMountain(arr);

	return 0;
}