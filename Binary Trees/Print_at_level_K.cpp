#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*left;
	node*right;

	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

node*CreateBt(){

	int data;
	cin>>data;

	if(data == -1){
		return NULL;
	}

	node*root = new node(data);

	root->left = CreateBt();
	root->right = CreateBt();

	return root;
}

void PrintNodes(node*root , int k){

	if(root == NULL || k<0){
		return;
	}

	if(k == 0){
		cout<<root->data<<" ";
	}

	PrintNodes(root->left , k-1);
	PrintNodes(root->right , k-1);
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*root = CreateBt();

	PrintNodes(root, 2);
	return 0;
}