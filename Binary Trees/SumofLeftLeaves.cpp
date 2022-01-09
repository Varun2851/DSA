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

	int data;
	cin>>data;

	if(data == -1){
		return NULL;
	}

	node*root = new node(data);

	root->left = CreteBt();
	root->right = CreteBt();

	return root;
}

int  SumOfLeftLeaves(node*root , bool isleft , int &sum){

	//base case
	if(!root){
		return 0 ;
	}

	//recursive case
	//check weather the node is a left node ans is leaf

	if(!root->left and !root->right and isleft){

		sum = sum+root->data;
	}
	//pass true for left and false for right
	SumOfLeftLeaves(root->left , true , sum);
	SumOfLeftLeaves(root->right , false , sum);

	return sum;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*root = CreteBt();

	int sum = 0;
	SumOfLeftLeaves(root , false , sum);

	cout<<"Sum of Left leafes :"<<sum<<endl;

	return 0;
}