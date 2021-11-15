#include <iostream>
#include <vector>
using namespace std;

class node {
public:
	int data;
	node* next; // self referential class

	node(int d): data(d), next(NULL) {}
};

int length(node* head) {
	int cnt = 0;
	while (head) {
		cnt++;
		head = head -> next;
	}
	return cnt;
}

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

void PrintLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}



///////////////////////////// Cycle Detection ////////////////////
bool isCyclic(node* head) {
	node* fast = head, *slow = head;
	while (fast and fast->next) {
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow) {
			return true;
		}
	}

	return false;
}
///////////////////////////// !Cycle Detection ////////////////////

///////////////////////////// Create Cycle ////////////////////
void CreateCycle(node* head) {
	node* temp = head;
	while (temp->next) {
		temp = temp->next;
	}
	temp->next = head->next->next;
}
///////////////////////////// !Create Cycle ////////////////////

///////////////////////////// BREAK CYCLE /////////////////////
void BreakCycle(node* head) {
	node* fast = head, *slow = head;

	while (fast and fast->next) {
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow) {
			break;
		}
	}

	slow = head;
	node* prev = head;
	while (prev->next != fast) {
		prev = prev->next;
	}

	while (fast != slow) {
		prev = fast;
		fast = fast->next;
		slow = slow->next;
	}
	prev->next = NULL;

}
///////////////////////////// !BREAK CYCLE /////////////////////

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* head = NULL, *head1 = NULL;

	InsertAtEnd(head, 1);
	InsertAtEnd(head, 2);
	InsertAtEnd(head, 3);
	InsertAtEnd(head, 4);
	InsertAtEnd(head, 5);
	InsertAtEnd(head, 6);
	InsertAtEnd(head, 7);
	InsertAtEnd(head, 8);
	InsertAtEnd(head, 9);
	InsertAtEnd(head, 10);
	InsertAtEnd(head, 11);
	CreateCycle(head);

	if (isCyclic(head)) {
		cout << "Yes cyclic" << endl;
		BreakCycle(head);
	}
	else {
		cout << "Not cyclic" << endl;
	}

	PrintLL(head);
	return 0;
}