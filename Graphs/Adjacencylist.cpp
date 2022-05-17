#include<bits/stdc++.h>
using namespace std;

class Graph{
public:
	list<int>*l; //Pointer
	int N;

	Graph(int n){ // constructor
		l = new list<int>[n];
		N = n;
	}

	void addEdges(int u , int v , bool bider = true){
		l[u].push_back(v);
		if(bider){
			l[v].push_back(u);
		}
	}

	void Print(){
		for(int i = 0; i<N; i++){
			cout<<i<<" : ";
			for(auto node : l[i]){
				cout<<node<<"-->";
			}
			cout<<endl;
		}
	}
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int no_of_edges;
	int no_of_vertices;

	cin>>no_of_edges>>no_of_vertices;

	Graph g (no_of_vertices);
	int u, v;
	for(int i = 0; i<n; i++){
		cin>>u>>v;
		g.addEdges(u,v);
	}
	g.Print();

	return 0;
}