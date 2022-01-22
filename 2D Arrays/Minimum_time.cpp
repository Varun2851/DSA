//https://leetcode.com/problems/minimum-time-visiting-all-points/submissions/

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        int n=points.size();
        for(int i=0;i<n-1;i++){
            ans+=max(abs(points[i][0]-points[i+1][0]),abs(points[i][1]-points[i+1][1]));
        }
        return ans;
    }
};