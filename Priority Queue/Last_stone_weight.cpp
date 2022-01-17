 //https://leetcode.com/problems/last-stone-weight/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        int new_weight = 0;
        priority_queue<int>pq;
        
        for(int i = 0; i<n; i++){
            pq.push(stones[i]);
        }
        if(n == 1){
            return stones[0];
        }
        while(pq.size() > 1){
            int A = pq.top();
            pq.pop();
            
            int B = pq.top();
            pq.pop();
            
             new_weight = A-B;
            
            pq.push(new_weight);
        }
        return new_weight;
    }
};