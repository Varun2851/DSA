//https://leetcode.com/problems/k-closest-points-to-origin/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        //inserted first k po
        priority_queue<pair<double,int > >pq; //max heap
        
        int n = points.size();
        
        for(int i = 0; i<n; i++){
            double dist = sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            if(pq.size() < k){
                pq.push({dist , i});
            }
            else{
                if(pq.top().first > dist){
                    pq.pop();
                    pq.push({dist , i});
                }
            }
        }
        vector<vector<int> >ans;
        while(!pq.empty()){
            int indx = pq.top().second;
            ans.push_back({points[indx][0] , points[indx][1]});
            pq.pop();
        }
        return ans;
    }
};