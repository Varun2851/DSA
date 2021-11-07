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

//////////////////////////Mid without cal.the lenght////////////////////////

node*mid(node*head){
	if(head==NULL){
		return head;
	}
	node*fast = head->next;
	node*slow = head;

	while(fast and fast->next != NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
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
	InsertFront(head , tail , 5);
	InsertFront(head , tail , 6);

	PrintLL(head);

	node *ans = mid(head);

	if(ans != NULL){
		cout<<"Mid found :"<<ans->data;
	}
	else{
		cout<<"Mid does not exist"<<endl;
	}

	return 0;
}