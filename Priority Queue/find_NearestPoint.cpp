//1779. Find Nearest Point That Has the Same X or Y Coordinate

// You are given two integers, x and y, which represent your current location on a Cartesian grid: (x, y). 
//You are also given an array points where each points[i] = [ai, bi] represents that a point exists at (ai, bi). A point is valid if it shares the same x-coordinate or the same y-coordinate as your location.

// Return the index (0-indexed) of the valid point with the smallest Manhattan distance from your current location. If there are multiple, return the valid point with the smallest index. If there are no valid points, return -1.

// The Manhattan distance between two points (x1, y1) and (x2, y2) is abs(x1 - x2) + abs(y1 - y2).

 

// Example 1:

// Input: x = 3, y = 4, points = [[1,2],[3,1],[2,4],[2,3],[4,4]]
// Output: 2
// Explanation: Of all the points, only [3,1], [2,4] and [4,4] are valid. Of the valid points, [2,4] and [4,4] have the smallest Manhattan distance from your current location, with a distance of 1. [2,4] has the smallest index, so return 2.



class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >pq;
        int n = points.size();
        for(int i = 0; i<n; i++){
            if(points[i][0] == x || points[i][1] == y){
                int distance = abs(points[i][0] - x) + abs(points[i][1] - y);
                pq.push({distance,i});
            }
        }
        if(!pq.empty()){
            return pq.top().second;
            pq.pop();
        }
        return -1;
    }
};