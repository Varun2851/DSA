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
		return NULL;
	}

	root = new node(data);
	root->left = CreateBt();
	root->right = CreateBt();

	return root ;
}

void RightView(node*root , int level , int &Max_level){

	//base case
	if(!root){
		return ;
	}
	//recursive case
	if(level>Max_level){
		cout<<root->data<<" ";
		Max_level = level;
	}

	RightView(root->right , level+1 , Max_level);
	RightView(root->left , level+1 , Max_level);

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*root = CreateBt();
	int Max_level = -1;

	RightView(root , 0 , Max_level);

	cout <<endl;
	return 0;
}