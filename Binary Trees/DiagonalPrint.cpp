#include<iostream>
#include<map>
#include<vector>
using namespace std;

//// 8 10 1 -1 -1 6 7 -1 -1 -1 3 4 -1 -1 14 13 -1 -1 -1 (input)

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

void DiagonalPrint(node* root, int d, map<int, vector<int> > &h) {
	// base case
	if (!root) return;

	// recursive case
	h[d].push_back(root->data);
	// cout<<root->data<<" ";
	DiagonalPrint(root->left, d + 1, h);
	DiagonalPrint(root->right, d, h);
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	node*root = CreateBt();
	map<int, vector<int> > h;
	DiagonalPrint(root, 0, h);

	for (auto node : h) {
		for (auto data : node.second) { //iterating over vector
			cout << data << " ";
		}
		cout << endl;
	}

	return 0;
}

