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
	node*root = NULL;
	int data;
	cin>>data;

	//base case
	if(data == -1){
		return NULL;
	}
	//recursive case
	root = new node(data);
	root->left = CreateBt();
	root->right = CreateBt();

	return root;
}

void LeftView(node*root , int level , int &max_level){
	//base case
	if(!root){
		return;
	}
	//recursive case
	if(level > max_level){
		cout<<root->data<<" ";
		max_level = level;
	}
	LeftView(root->left , level+1 , max_level);
	LeftView(root->right , level+1, max_level);
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*root = CreateBt();
	int max_level = -1;

	LeftView(root , 0 , max_level);

	return 0;
}