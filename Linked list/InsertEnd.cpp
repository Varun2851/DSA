#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*next;

	node(int d) : data(d) , next(NULL){}
};

void InsertEnd(node*&head , node*&tail , int data){

	node*n = new node(data); //dynamically creating a node

	if(head == NULL){ // no head exixt initially
		head = tail = n;
	}
	else{
		tail->next = n;
		tail = n;
	}
}

void PrintLL(node*head){
	while(head != NULL){
		cout<<head->data<<"->";
		head = head->next;
	}

	cout<<"NULL"<<endl; // inserting NULL manually
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*head = NULL;
	node*tail = NULL;

	InsertEnd(head , tail , 1);
	InsertEnd(head , tail , 2);
	InsertEnd(head , tail , 3);
	InsertEnd(head , tail , 4);

	PrintLL(head);

	return 0;
}