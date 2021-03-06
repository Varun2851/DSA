#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*next;

	node(int d):data(d),next(NULL){} 
};

void InsertFront(node*&head , node*&tail , int data){

	node*n = new node(data); //dynamically creating a node

	if(head == NULL){ // no head exixt initially
		head = tail = n;
	}
	else{
		n->next = head;
		head = n;
	}
}

void DeleteFront(node*&head , node*&tail){
	if(head == NULL){
		return;
	}
	else if(head->next == NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node*n = head;
		head = head->next;
		delete n;
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

	InsertFront(head , tail , 1);
	InsertFront(head , tail , 2);
	InsertFront(head , tail , 3);
	InsertFront(head , tail , 4);

	PrintLL(head);

	DeleteFront(head,tail);
	PrintLL(head);

	return 0;
}