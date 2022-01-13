//MinHeap
#include<iostream>
#include<vector>
using namespace std;

class Heap{
	vector<int>v;

	void heapify(int i){
		int left = 2*i;
		int right = 2*i+1;

		int minimum_indx = i; //suppose that our current element is  minimum
		if(left < v.size() and v[left] < v[minimum_indx]){
			minimum_indx = left;
		}
		if(right < v.size() and v[right] < v[minimum_indx]){
			minimum_indx = right;
		}
		if(minimum_indx != i){
			swap(v[i] , v[minimum_indx]);
			heapify(minimum_indx);
		}
	}


public:
	Heap(int defaultSize = 10){
		v.reserve(defaultSize+1);
		v.push_back(-1);  // Done beacuse we want to avoid 0th index
	};

	void push(int data){
		//add data to end of the heap
		v.push_back(data);
		int indx = v.size()-1;
		int parent = indx/2;

		while(indx>1 and v[indx] < v[parent]){
			swap(v[indx] , v[parent]);
			indx = parent;
			parent = parent/2;
		}
	}

	int getMinimum(){
		
		return v[1];
	}

	//Min Element
	void pop(){
		//swap first and last element
		int indx = v.size()-1;
		swap(v[1],v[indx]); // swap first and last element
		v.pop_back();
		heapify(1);
	}

	bool empty(){
		return v.size() == 1;
	}

};

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	Heap h;
	h.push(1);
	h.push(2);
	h.push(3);
	h.push(4);
	h.push(5);
	h.push(6);

	int ans =h.getMinimum();

	cout<<"Minimum element :"<<ans<<endl;

	while(!h.empty()){
		cout<<h.getMinimum()<<endl;
		h.pop();
	}

	return 0;
}