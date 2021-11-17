#include<iostream>
#include"stack.h"
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	stack<int>s;

	s.push(1);
	s.push(2);
	s.push(3);
	

	while(!s.empty()){
		cout<<s.top()<<" "<<endl;
		s.pop( );
	}

	cout<<endl;

	return 0;
}