#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*next;

	node(int d):data(d),next(NULL){}
};

void InsertAtEnd(node* &head, int data) {
	node* n = new node(data);
	if (head == NULL) {
		// We are inserting the first node
		head = n;
	}
	else {
		// We have linkedList
		node* temp = head;
		while (temp->next) {
			temp = temp->next;
		}
		temp->next = n;
	}
}

node* merge(node*a , node*b){
	//base case
	if(a == NULL){
		return b;
	}
	if(b == NULL){
		return a;
	}

	//recursive case
	node*newhead;
	if(a->data < b->data){
		newhead = a;
		node*c = merge(a->next , b);
		newhead->next = c;
	}
	return newhead;
}

void PrintLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*head = NULL;
	node*head1 = NULL;

	InsertAtEnd(head , 1);
	InsertAtEnd(head , 2);
	InsertAtEnd(head , 3);
	InsertAtEnd(head , 4);
	InsertAtEnd(head , 5);
	InsertAtEnd(head1 , 6);
	InsertAtEnd(head1 , 7);
	InsertAtEnd(head1 , 8);
	InsertAtEnd(head1 , 9);

	merge(head , head1);

	PrintLL(head);

	return 0;
}