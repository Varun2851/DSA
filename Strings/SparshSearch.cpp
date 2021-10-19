#include<iostream>
using namespace std;

int find_string(string arr[] , int n , string key){
	int s = 0;
	int e = n-1;

	while(s<=e){
		int mid = (s+e)/2;
		int left_mid = mid-1;
		int right_mid = mid+1;
		if(arr[mid] == ""){
			while(1){
				if(left_mid < s and right_mid > e){
					return -1;
				}
				else if(left_mid >= s and arr[left_mid] != ""){
					mid = left_mid;
					break;
				}
				else if(right_mid <= e and arr[right_mid] != ""){
					mid = right_mid;
					break;
				}
				else{
					left_mid-- ;
					right_mid-- ;
				}
			}
		}
		if(arr[mid] == key){
			return  mid;
		}
		else if(arr[mid] > key){
			e = mid-1;
		}
		else{
			s = mid+1;
		}
	}
	return -1;
}

int main()
{
	string arr[] = {"ai", "", "","bat", "","","car","cat","","","dog",""};
	int n = sizeof(arr)/sizeof(string);

	string key = "dog";
	cout<<find_string(arr , n , key );
	cout<<endl;
	return 0;
}