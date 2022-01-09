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
		return  0;
	}

	root = new node(data); // create a node dynamically

	root->left = CreteBt();
	root->right = CreteBt();

	return root ;
}

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

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*root = CreteBt();

	cout<<"Height of Binaray Tree :"<<HeightOfBT(root)<<endl;

	return 0;
}