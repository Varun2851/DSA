https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Using Binary Search
        int n = matrix.size();
        int m = matrix[0].size();
        
        int row = 0;
        int col = m-1;
        
        while(row < n && col >= 0){
            int element = matrix[row][col];
            
            if(element == target){
                return true;
            }
            else if(element < target){
                row++;
            }
            else{
                col--;
            }
        }
        return false;
    }
};

//////////////////////////////////////////Another Approach//////////////////////////////////////

//time complixity = O(N^2)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n =matrix.size();
        int m = matrix[0].size();
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};