//https://leetcode.com/problems/valid-sudoku/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>mp;

        for(int i = 0; i<board.size(); i++){
        	for(int j = 0; j<board[0].size(); i++){
        		if(board[i][j] != '.'){
        			int num = board[i][j] - '0' ; //converted digit to char
        			string row = "row" + to_string(i) + to_string(num);
        			string col = "col" + to_string(j) + to_string(num);
        			string box = "Box" + to_string((i/3)*3 + (j/3)) + to_string(num);

        			if(mp.find(row) != mp.end() || mp.find(col) != mp.end() || mp.find(box) != mp.end()){
        				return false;
        			}
        			else{
        				mp.insert(row);
        				mp.insert(col);
        				mp.insert(box);
        			}
        		}
        	}
        }
        return true;
    }
};