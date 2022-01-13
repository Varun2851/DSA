#include <iostream>
#include<vector>
using namespace std;

template <typename T>
class heap{
	vector<T>v;

	void heapify(int i){
		int left = 2*i;
		int right = 2*i+1;

		int minimum_indx = i; // suppose current indx is the minimum number indx

		if(left < v.size() and v[minimum_indx] > v[left]){
			minimum_indx = left;
		}
		if(right < v.size() and v[minimum_indx] > v[right]){
			minimum_indx = right;
		}

		if(minimum_indx != i){
			swap(v[minimum_indx] , v[i]);
			heapify(minimum_indx);
		}
	}
	public:
	heap(int default_size = 10){
		v.reserve(default_size+1);
		v.push_back(-1); //done because we want to avoid 0th index
	};

	void push(T data){
		v.push_back(data);
		int indx = v.size()-1;
		int parent = indx/2;
		while(indx>1 and v[indx] < v[parent]){
			swap(v[indx],v[parent]);
			indx = parent;
			parent = parent/2;
		}
	}

	T getMinimum(){
		return v[1];
	}

	void pop(){
		//swap 1st element with last element
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}

	bool empty(){
		return v.size() == 1;
	}
};

int main() {
	// your code goes here
	heap<char>H;
	H.push('A');
	H.push('B');
	H.push('C');

	while(!H.empty()){
		cout<<H.getMinimum()<<endl;
		H.pop();
	}

	return 0;
}

