#include<iostream>
#include<map>
#include<vector>
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

void VerticalOrder(node*root, int d, map<int,vector<int> >&h){
	//base case
	if(root == NULL){
		return;
	}
	h[d].push_back(root->data);

	VerticalOrder(root->left , d-1 ,h);
	VerticalOrder(root->right , d+1 ,h);
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*root = CreateBt();

	// node* root = new node(1);
	// root->left = new node(2);
 //    root->right = new node(3);
 //    root->left->left = new node(4);
 //    root->left->right = new node(5);
 //    root->right->left = new node(6);
 //    root->right->right = new node(7);
 //    root->right->left->right = new node(8);
 //    root->right->right->right = new node(9);

	map<int,vector<int> >h;
	int d = 0;

	VerticalOrder(root , d ,h);

	for(auto node : h){
		for(auto data : node.second){
			cout<<data<<" ";
		}
		cout<<endl;
	}
	return 0;
}