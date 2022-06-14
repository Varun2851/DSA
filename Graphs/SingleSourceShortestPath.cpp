//Mistake which i made while writing the code 
//Did not make a call in main fun of addEdge.
//visited[children] should be in the for each loop of children

#include<bits/stdc++.h>
using namespace std;
template<typename T>

class Graph{
	public:
		unordered_map<T , list<T> >h;
	
	void addEdge(T u , T v , bool bidir = true){
		h[u].push_back(v);
		if(bidir){
			h[v].push_back(u);
		}
	}
	
	void Bfs(T start){
		queue<T>q;
		unordered_map<T , bool>visited;
		q.push(start);
		visited[start] = true;
				
		while(!q.empty()){
			T node = q.front();
			q.pop();
			cout<<node<<" ";
			
			for(auto children: h[node]){
				if(!visited[children]){
					q.push(children);
					visited[children] = true;
				}
			}		
		}
	}
	
	int SSSP(T start){
		queue<T>q;
		unordered_map<T,bool>visited;
		unordered_map<T,int>distance;
		q.push(start);
		visited[start] = true;
		distance[start] = 0;
		
		while(!q.empty()){
			T node = q.front(); // extract the first node
			q.pop();
			
			for(auto children : h[node]){
				if(!visited[children]){
					q.push(children);
					visited[children] = true;
					distance[children] = distance[node] +1;
				}
			}
	    }	
	    // Printing all the distances from start
	    for(auto dis : distance){
	    	cout << "Distance of " << dis.first << " from " << start << " is " << dis.second << endl;
		}
	}
	
	void Print(){
		for(auto X : h){
			cout<<X.first<<" ";
			
			for(auto neighbour : X.second){
				cout<<neighbour<<" ";
			}
		}
	}
};

int main(){
	
	Graph<int>g;
	
	int no_of_nodes;
	int no_of_edges;
	cin>>no_of_nodes>>no_of_edges;
	
	int u ,v;
	
	for(int i = 0; i<no_of_edges; i++){
		cin>>u>>v;
		g.addEdge(u,v);
	}
	g.Bfs(0);
	cout<<endl;
	g.Print();
	cout<<endl;
	g.SSSP(0);
	return 0;
}