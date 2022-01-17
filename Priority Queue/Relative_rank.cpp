#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Relative_rank(vector<int>v , int n){

	//first convert the integer array to string array
	vector<string>v1;
	for(int i = 0; i<n; i++){
		v1.push_back(to_string(v[i]));
	}

	sort(v1.begin() , v1.end());

	vector<string>v2;

	for(int i = 0; i<n; i++){
		if(v1[i] == "1"){
			v2.push_back("Gold Medal");
		}
		else if(v1[i] == "2"){
			v2.push_back("Silver Medal");
		}
		else if(v1[i] == "3"){
			v2.push_back("Bronze Medal");
		}
		else{
			v2.push_back(v1[i]);
		}
	}

		for(int i = 0; i<n; i++){
		cout<<v2[i]<<endl;
	}

	return ;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int>v(100);
	int n;
	cin>>n;

	for(int i = 0; i<n; i++){
		cin>>v[i];
	}

	Relative_rank(v,n);

	return 0;
}