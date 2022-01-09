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

	 return root;
}

int sumBt(node*root){

	if(!root){
		return 0;
	}

	return sumBt(root->left) + sumBt(root->right) + root->data;

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*root = CreateBt();

	cout << "Sum of binary Tree :" << sumBt(root) <<endl;

	return 0;
}