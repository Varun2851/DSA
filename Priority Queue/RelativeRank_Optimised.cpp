#include<bits/stdc++.h>
using namespace std;

void Relative_rank(vector<int>v , int n){

	  priority_queue<pair<int,int>> pq;
	   for(int i=0; i<v.size(); i++){
            pq.push({v[i],i});
        }
       
    int m= v.size();
    
    vector<string> vec(m);
   
    
    int cnt=0;
    
    
    while(!pq.empty()){
        cnt++;
        
        if(cnt==1){
           
            //vec[pq.top().second].append("Gold Medal");
            vec.push_back("Gold Medal");
        }
        else if(cnt==2){
            vec[pq.top().second].append("Silver Medal");
        }
        else if(cnt==3){
            vec[pq.top().second].append("Bronze Medal");
        }
        else {
            vec[pq.top().second].append(to_string(cnt));
        }
        pq.pop();
    }
    for(int i =0; i<m; i++){
    	cout<<vec[i]<<endl;
    }
    return;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int>v(10);
	int n;
	cin>>n;

	for(int i = 0; i<n; i++){
		cin>>v[i];
	}

	Relative_rank(v , n);

	return 0;

}