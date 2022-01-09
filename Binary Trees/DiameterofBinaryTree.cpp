//Diameter of Binary Tree 

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

node*CreteBt(){

	node*root = NULL;

	int data;
	cin>>data;

	if(data == -1){
		return 0;
	}

	root = new node(data);

	root->left = CreteBt();
	root->right= CreteBt();

	return root ;
}

// Helper function

int HeightOfBT(node*root){

	//base case
	if(root == NULL){
		return 0;
	}

	//recursive case

	int Left_Height = HeightOfBT(root->left);
	int  Right_Height = HeightOfBT(root->right);

	return max(Left_Height , Right_Height) + 1; 
}

int Diameter(node*root){

	//base case

	if(root == NULL){
		return 0;
	}

	//recuursive case

	//1. Diameter is in left subtree
	int op1 = Diameter(root->left);

	//2. Diameter is in right subtree
	int op2 = Diameter(root->right);

	//3.Diameter is via root node
	int op3 = HeightOfBT(root->left) + HeightOfBT(root->right);

	return max(op1 , max(op2, op3));
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*root = CreteBt();

	cout<<"Diameter of binary tree :"<<Diameter(root)<<endl;

	return 0;
}