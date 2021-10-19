#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&v , int s , int e)
{
	int i = s;
	int m = (s+e)/2;
	int j = m+1;

	vector<int>temp; // creating an empty vector;

	while(i <= m and j <= e){
		if(v[i] <= v[j]){
			temp.push_back(v[i]); // if v[i] is smaller put it in temp vector
			i++;
		}
		else{
			temp.push_back(v[j]); // if v[j] is smaller put it in temp vector
			j++;
		}
		
	}

	while(i <= m){
		temp.push_back(v[i]); // may be some ele are there which are remaining , so just copy them
		i++;
	}

	while(j <= e){
		temp.push_back(v[j]);
		j++;
	}

	// copy back the ele from temp vector to original vector 
	int k = 0;
	for(int indx = s; indx <= e; indx++){
		v[indx] = temp[k++];
	}
	return ;
}

void mergeSort(vector<int>&v , int s , int e)
{
	// base case
	if(s >= e){
		return ;
	}
	//recursive case
	int mid = (s+e)/2;
	mergeSort(v , s , mid);
	mergeSort(v , mid+1 , e);

	return merge(v , s , e);
}
int main()
{
	vector<int>v{3,1,5,8,-3,10,-18,0};
	int n = v.size();
	int s = 0;
	int e = n-1;
	mergeSort(v,s,e);
	// print the sorted vec
	for(auto x : v){
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
}