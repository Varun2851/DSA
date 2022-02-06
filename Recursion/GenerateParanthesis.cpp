
//https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
    vector<string>ans;
    void solve(char*a , int i , int open , int close , int n){
        //base case
        if(i == 2*n){
            a[i] = '\0';
            string x(a);
            ans.push_back(x);
            return;
        }
        //recursive case
        if(open < n){
            a[i] = '(';
            solve(a , i+1 , open+1 , close , n);
        }
        if(open > close){
            a[i] = ')';
            solve(a , i+1 , open , close+1,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        char a[10000];
        solve(a , 0 , 0, 0 ,n);
        return ans;
    }
};