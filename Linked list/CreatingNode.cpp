#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*next;

	node(int d):data(d) , next(NULL){}
};

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node n1(1);
	node n2(2);

	cout<<n1.data<<"-->"<<n2.data; // normal way to print the data 

	cout<<endl;

	n1.next = &n2; // storing the address of n2 node in n1

	cout<<n1.data<<"-->"<<n1.next->data; // printing the data of n2 through n1 

	return 0;
}