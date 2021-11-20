#include<bits/stdc++.h>
using namespace std;

void InsertAtBottom(stack<int> &s, int TopElement) {
	if (s.empty()) {
		s.push(TopElement);
		return;
	}
	// recursive case
	int top = s.top();
	s.pop();
	InsertAtBottom(s, TopElement);
	s.push(top);
}

void reverseStack(stack<int> &s){
	//base case
	if(s.empty()){
		return;
	}
	//recursive case
	int topElement = s.top();
	s.pop();
	reverseStack(s);
	InsertAtBottom(s , topElement);
}

void print(stack<int>s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	stack<int>s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	print(s);
	reverseStack(s);
	print(s);

	return 0;
}
 