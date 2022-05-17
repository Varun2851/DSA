#include<bits/stdc++.h>
using namespace std;

void print(int **edges , int n , int sv , bool *visited){
		//sv = starting vertix
	cout<<sv<<endl;
	visited[i] = true;
	for(int i = 0; i<n; i++){
		if(i == sv){
			continue;
		}
		if(edges[sv][i] == 1){
			if(visited[i]){
				continue;
			}
			print(edges , n ,i, visited);
		}
	}
}

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n; // vertices
 	int e; // edges
 	int **edges = new int *[n];
 	for(int i = 0; i<n; i++){
 		edges[i] = new int[n];
 	}

 	for(int i = 0; i<n; i++){
 		for(int j = 0; j<n; j++){
 			edges[i][j] = 0;
 		}
 	}
 	 bool *visited = new  bool[n];
 	 for(int i =0; i<n; i++){
 	 	visited[i] = false;
 	 }

 	//Take input from user
 	for(int i = 0; i<e; i++){
 		int first , second;
 		cin>>first>>second;
 		edges[first][second] = 1;
 		edges[second[first]] = 1;
 	}
 	print(edges,n,i,visited);
 	return 0;
}
