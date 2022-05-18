#include<bits/stdc++.h>
using namespace std;

void print_BFS(int **arr , int n , int sv , bool*visited){

	queue<int>pending_vertices;
   
	pending_vertices.push(sv);
    visited[sv] = true;
	while(!pending_vertices.empty()){
		int current_vertix = pending_vertices.front();
		pending_vertices.pop();
		cout<<current_vertix<<endl;

		for(int i = 0; i<n; i++){
            if(i ==  current_vertix){
                continue;
            }
			if(arr[current_vertix][i] == 1 and !visited[i]){
				pending_vertices.push(i);
				visited[i] = true;
			}
		}
	}
   
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int v; // no of vertices 
	int e; // no of edges
	cin>>v;
	cin>>e;

	int **arr = new int *[v];
	for(int i = 0; i<v; i++){
		arr[i] = new int[v];
	}

	for(int i = 0; i<v; i++){
		for(int j = 0; j<v; j++){
			arr[i][j] = 0; //initialise the whole matrix with 0
		}
	}

	//Take input from user
	for(int i = 0; i<e; i++){
		int u;
		int v;
		cin>>u>>v;
		arr[u][v] = 1;
		arr[v][u] = 1;
	}
    bool *visited = new bool[v];
	for(int i = 0; i<v; i++){
		visited[i] = false;
	}
    print_BFS(arr,v , 0,visited);
	return 0;

}