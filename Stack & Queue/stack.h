#include"node.h"
template<typename T>

class stack{
	node<T>*head;
	int len;
public:
	stack(){
		head = NULL;
		len = 0;
	}

	void push(T d){
		node<T>* n = new node<T>(d);
		n->next = head;
		head =  n;
		len++;
	}

	void pop(){
		//delete at front
		if(head == NULL){
			return;
		}
		else if(head->next == NULL){
			//we have a single node
			delete head;
			head = NULL;
			len--;
		}
		else{
			node<T>*n = head;
			head = head->next;
			delete n;
			len--;
		}
	}
	bool empty(){
		return head == NULL;
	}
	int size(){
		return len;
	}
	T top(){
		return head->data;
	}
};