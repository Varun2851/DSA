//Weakest Rows

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    
	//min Heap
	priority_queue<pair<int ,int > , vector<pair<int , int > > ,greater<pair<int , int > >> pq;

    for(int i = 0; i<mat.size(); i++){
    	int count = 0;

    	for(int j =0; j<mat[i].size(); j++){
    		if(mat[i][j] == 1){
    			count++;
    		}
    	}
    	pq.push({count , i});
    }

    vector<int>x;
    while(k>0){
    	pair<int ,int> temp = pq.top();
    	x.push_back(temp.second);
    	pq.pop();
    	k--;
    }

    return x;
    
}