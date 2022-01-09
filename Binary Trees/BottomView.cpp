#include<iostream>
#include<map>
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
		return NULL;
	}

	root = new node(data); // create a new node

	root->left = CreteBt();
	root->right = CreteBt();

	return root; 

}

void BottomViewHelper(node*root , int level , int d , map<int,pair<int , int > >&h){
	//base case
	if(!root){
		return;
	}

	//recursive case

	if(h.count(d) == 0 || level >= h[d].second){
		h[d] = {root->data , level};
	}

	BottomViewHelper(root->left , level+1 , d-1 , h);
	BottomViewHelper(root->right , level+1 , d+1 , h);
}

void BottomView(node*root){
	map<int, pair<int , int > >h;

	BottomViewHelper(root , 0 , 0 , h);

	for(auto node : h){
		cout<<node.second.first<<" ";
	}
	cout<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*root = CreteBt();

	BottomView(root);

	return 0;
}