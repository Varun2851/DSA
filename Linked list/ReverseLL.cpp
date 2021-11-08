#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;

	node(int d):data(d) , next(NULL){}
};
void InsertEnd(node*&head , int data){
	node*n = new node(data);

	if(head == NULL){
		head = n; //we are inserting the 1st node
	}
	else{
		//we have a linked list
		node*temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = n;
	}
} 

////////////////////////ReverseLL////////////////////////

void ReverseLL(node*& head){
	  node*c = head , *prev = NULL , *n;
	  while(c){
	  	n = c->next;
	  	c->next = prev;
	  	prev = c;
	  	c = n;
	}
	head = prev;
}

void PrintLL(node*head){
	while(head){
		cout<<head->data<<"-->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*head = NULL;
	InsertEnd(head , 1);
	InsertEnd(head , 2);
	InsertEnd(head , 3);
	InsertEnd(head , 4);
	InsertEnd(head , 5);

	PrintLL(head);
	ReverseLL(head);
	PrintLL(head);
	return 0;
}