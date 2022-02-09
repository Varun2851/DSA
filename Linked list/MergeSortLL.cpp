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

node* mid(node* head) {
	if (!head) {
		return head;
	}
	node* fast = head->next, *slow = head;

	while (fast and fast->next) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
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

	else {
		newhead = b;
		node* c = merge(a, b->next);
		newhead->next = c;
	}
	return newhead;
}


///////////////////////MergeSort////////////////////////////////////

node* mergeSort(node* a) {
	// base case
	if (a == NULL or a->next == NULL) {
		return a;
	}

	// recursive case
	// 1. Divide
	node* m = mid(a);
	node* b = a;
	node* c = m->next;
	m->next = NULL;

	// 2. Sort
	b = mergeSort(b);
	c = mergeSort(c);

	// 3. Merge
	node* newHead = merge(b, c);
	return newHead;
}

void PrintLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}

int main(){

//	#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	#endif

	node*head = NULL;
	
	InsertAtEnd(head , 4);
	InsertAtEnd(head , 2);
	InsertAtEnd(head , 1);
	InsertAtEnd(head , 3);
//	InsertAtEnd(head , 5);

	PrintLL(head);

   	node*a = mergeSort(head);

	PrintLL(a);

	return 0;
}