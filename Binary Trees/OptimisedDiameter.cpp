//Diameter of binary tree in O(N) time complixity

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

	if(data == -1){
		return 0;
	}

	root = new node(data);

	root->left = CreateBt();
	root->right = CreateBt();

	return root;
}

class Pair {
public:
	int height ;
	int diameter;
};

Pair Diameter_Optimised(node*root){

	Pair p;

	// base case
	if(root == NULL){
		 p.height = p.diameter = 0;
		 return p;
	}

	// recursive case

	Pair left = Diameter_Optimised(root->left);
	Pair right = Diameter_Optimised(root->right);

	p.height = max(left.height , right.height) +1;

	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;

	p.diameter = max(op1 , (op2 , op3));

	return p;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*root = CreateBt();

	Pair ans = Diameter_Optimised(root);

	cout<<"Fast diameter :"<<ans.diameter<<endl;
	cout<<"Fast Height :"<<ans.height<<endl;

	return 0;
}


