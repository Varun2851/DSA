#include<iostream>
#include<vector>
using namespace std;

class stack{

	vector<int>v;

public:
 	int top(){
 		return v[v.size()-1];
 	}
 	void push(int data){
 		v.push_back(data);
 	}
 	void pop(){
 		v.pop_back();
 	}
 	bool empty(){
 		return v.size() == 0;
 	}	
 	int size(){
 		return v.size();
 	}

};

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);

	cout<<s.top()<<endl;
	cout<<s.size()<<endl;

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	cout<<endl;

	cout<<s.empty()<<endl; // here size of the stack becomes zero 

	return 0;
}