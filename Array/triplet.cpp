#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

vector<vector<int> > triplets(vector<int> arr , int target_sum){
	// logic 
	int n = arr.size();
	sort(arr.begin(),arr.end()); // because we want sorted output
	vector<vector<int> > result;

	for(int i =0; i<=n-3; i++){

		int j = i+1;  
		int k = n-1;

		//Two pointer
		while(j < k){		
			int current_sum = arr[i];
			 current_sum += arr[j];
			 current_sum += arr[k];

			if(current_sum == target_sum){
				result . push_back({arr[i],arr[j],arr[k]});

				j++;
				k--;
			}

			if(arr[j]==arr[k]){   //if the element before it also same keep on reducing 
				k--;
			}

			else if(current_sum > target_sum){

				k--;
			}
			else {
				j++;
			}

		}
	}
	return result;
}
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	vector<int > arr{0,0,0,0 };
	int S = 0;
	auto result = triplets(arr,S);

	for(auto v : result){
		for(auto no : v){
			cout<<no<<",";
		}
		cout<<endl;
	}
	return 0;
}