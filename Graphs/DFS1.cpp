 #include<bits/stdc++.h>
#include<queue>
using namespace std;
template<typename T>

class Graph{
public:
	unordered_map<T,list<T> > h;

	void addEdge(T u , T v , bool bidir = true){
		h[u].push_back(v);
		if(bidir){
			h[v].push_back(u);
		}
	}
	void printlist(){
		for(auto node:h){
			cout<<node.first<<" ";
			for(auto neighbour:node.second){
				cout<<neighbour<<" ";
			}
			cout<<endl;
		}
	}
	void Dfshelper(T start , unordered_map<T,bool>&visited){
		visited[start] = true;
		cout<<start<<" ";
		for(auto children: h[start]){
			if(!visited[children]){
				Dfshelper(children,visited);
			}
		}
	}
	void dfs(T start){
		unordered_map<T,bool>visited;
		Dfshelper(start,visited);
	}
};

int main(){
	Graph<int>g;
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(2,1);
	g.addEdge(2,4);
	g.addEdge(3,4);
	g.addEdge(3,2);
	g.addEdge(3,5);
	g.addEdge(3,6);
	g.addEdge(8,6);
	
	g.dfs(0);
	cout<<endl;
	return 0;
}