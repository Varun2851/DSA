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

class Pair{
public:
	int include;
	int exclude;

};

Pair MaxsubsetSum(node*root){
	
	Pair p;

	if(root == NULL){
		p.include = p.exclude = 0;
		return p;
	}

	Pair Left = MaxsubsetSum(root->left);
	Pair Right = MaxsubsetSum(root->right);

	p.include = root->data + Left.exclude + Right.exclude;
	p.exclude = max(Left.include , Left.exclude) + max(Right.include , Right.exclude);

	return p;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*root = CreateBt();

	Pair p = MaxsubsetSum(root);

	cout<<"Max Subset Sum :"<<max(p.include , p.exclude);

	return 0;
}
