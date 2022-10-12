#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node*left;
	node*right;

	node(int d){
		data =  d;
		left = NULL;
		right = NULL;
	}
};

bool getPath(node*root,int key,vector<int>&path){
	
	//Base case
	if(root == NULL){
		return false;
	}

	//Recursive case

	path.push_back(root->data);
	if(root->data == key){
		return true;
	}
	if(getPath(root->left,key,path) || getPath(root->right,key,path)){
		return true;
	}
	path.pop_back();
	return false;
}

int LCA(node*root,int n1, int n2){
	vector<int>path1,path2;

	if(!getPath(root,n1,path1) || !getPath(root,n2,path2)){
		return -1;
	}

	int pc;
	for(pc = 0; pc<path1.size() and path2.size(); pc++){
		if(path1[pc] != path2[pc]){
			break;
		}
	}
	return path1[pc-1];
}

int main(){

	node*root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->right->left = new node(5);
	root->right->right = new node(6);
	root->right->left->left = new node(7);

	int n1 = 7;
	int n2 = 6;

	int lca = LCA(root,n1,n2);

	if(lca == -1){
		cout<<"LCA does not exist"<<endl;
	}
	else{
		cout<<"LCA:"<<lca<<endl;
	}
	return 0;

}