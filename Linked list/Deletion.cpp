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

////////////////////////////Deletion///////////////////////////////////


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

void DeleteEnd(node*&head , node*&tail){
	if(head == NULL){
		return;
	}
	else if(head->next == NULL){
		delete head;
		head = tail = NULL;

	}
	else{
		node*temp = head;
		while(temp->next != tail){
			temp = temp->next;
		}
		delete tail;
		tail = temp;
		temp->next = NULL;
	}
}

void DeleteMid(node*&head , node*&tail , int pos){
	if(pos == 0){
		DeleteFront(head , tail);
	}
	else{
		node *temp = head;
	    for(int i =1; i<=pos-1; i++){
	    	temp = temp->next;
		}
		node*n = temp->next;
		temp->next = n->next;
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

	// DeleteFront(head,tail);
	// PrintLL(head);

	// DeleteEnd(head , tail);
	// PrintLL(head);

	DeleteMid(head , tail , 1);
	PrintLL(head);

	PrintLL(head);

	return 0;
}