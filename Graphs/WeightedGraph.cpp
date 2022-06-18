#include<bits/stdc++.h>
using namespace std;
template<Typename T>

class Graph{
	unordered_map<T,list<pair<T,int> > > h;
public:
	void addEdge(T src , T des , int dist , bool bidir = true){
		h[src].push_back({des, dist});
		if(bidir){
			h[des].push_back({src,dist});
		}
	}
	void print(){
		for(auto node : h){
			cout<<node.first<<":";
			for(auto neighbour : node.second){
				cout<<"("<<neighbour.first<<","<<neighbour.second<<")";
			}
			cout<<endl;
		}
	}

};

int main(){

	Graph<string>g;

	g.addEdge("Amritsar","Agra",1);
	g.addEdge("Amritsar","delhi",2);
	g.addEdge("delhi","Agra",3);
	g.addEdge("Agra","lucknow",8);
	g.addEdge("Agra","Bareilly",10);
	g.addEdge("Bareilly","lucknow",11);
	g.addEdge("lucknow","Amritsar",12);
	g.addEdge("lucknow","Bareilly",14);

	g.print();
	return 0;
}