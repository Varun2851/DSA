//https://leetcode.com/problems/the-kth-factor-of-n/

////////////////////////////// O(N) time complixity/////////////////////

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>ans;
        for(int i = 1; i<=n; i++){
            if(n%i == 0){
                ans.push_back(i);
            }
        }
        if(k<=ans.size()){
            return ans[k-1];
        }
        else{
            return -1;
        }
    }
};


/////////////////////////// O(N/2) time complixity ///////////////////////


class Solution {
public:
    int kthFactor(int n, int k) {
        for(int i = 1; i <= n/2; i++){
            if(n % i == 0) k--;
            if(k == 0) return i;
        }
        if(k == 1) return n;
        return -1;
    }
};