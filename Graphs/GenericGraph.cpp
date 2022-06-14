#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
template<typename T>

class Graph{
	unordered_map<T ,list<T> >h;
public:
	void addEdge(T u,T v , bool bidirectional = false){
		h[u].push_back(v);
		if(bidirectional == true){
			h[v].push_back(u);
		}
	}
	void print(){
		for(auto node : h){
			cout<<node.first<<"-->";
			for(auto neighbour:node.second){
				cout<<neighbour<<" ";
			}
			cout<<endl;
		}
	}
	void Bfs(int start){
		queue<T>q;
		unordered_map<T,bool>visited;
		q.push(start);
		visited[start] = true;
		while(!q.empty()){
			T node = q.front();
			q.pop();
			cout<<node<<" ";
			visited[node] = true;
			for(auto children : h[node]){
				if(!visited[children]){
					q.push(children);
					visited[children] = true;
				}
			}
		}
		cout<<endl;
	}
};

int main(){

	//Graph<string>g;

	// g.addEdge("Putin","Trump");
	// g.addEdge("Putin","Modi");
	// g.addEdge("Putin","Pope");
	// g.addEdge("Modi","Trump",true);
	// g.addEdge("Modi","yogi" ,true);
	// g.addEdge("yogi","prabhu");
	// g.addEdge("prabhu","Modi");


	
	
	Graph g(no_of_nodes);
	int no_of_edges,no_of_nodes;
	cin>>no_of_edges>>no_of_nodes;

	int u;
	int v;

	for(int i = 0; i<no_of_edges; i++){

		cin>>u>>v;
		g.addEdge(u,v);
	}


	g.Bfs(0);
	g.print();

	return 0;
}