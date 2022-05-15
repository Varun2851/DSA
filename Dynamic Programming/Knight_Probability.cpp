#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		bool inside(int N , int x , int y){
			if(x>=0 and x<N and y>=0 and y<N){
				return true;
			}
			return false;
		}
		vector<int>dx = {1,2,2,1,-1,-2,-2,-1};
		vector<int>dy = {2,1,-1,-2,-2,-1,1,2};

	double findProb(int N,int start_x, int start_y, int steps)
	{
	    // Code here
	    int dp[N][N][N];
	    //if k is 0 then the probability of knight to be in the chess board is always 1
	    for(int i = 0; i<N; i++){
	    	for(int j = 0; j<N; j++){
	    		dp[i][j][0] = 1;
	    	}
	    }
	    for(int s = 1; s<=steps; s++){
	    	for(int x = 0; x<N; x++){
	    		for(int y = 0; y<N; y++){
	    			double prob = 0;

	    			for(int i = 0; i<8; i++){
	    				int newx = x+dx[i];
	    				int newy = y+dy[i];

	    				if(inside(N,newx,newy)){
	    				prob += dp[newx][newy][s-1];

	    				}
	    			}
	    			dp[x][y][s] = prob;	
	    		}
	    	}
	    }
	    return dp[start_x][start_y][steps];
	}
};

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int tc;
	cin >> tc;
	while(tc--){
		int N, start_x, start_y, steps;
		cin >> N >> start_x >> start_y >> steps;
		Solution ob;
		double ans = ob.findProb(N, start_x, start_y, steps);
		cout << fixed << setprecision(6) << ans <<"\n";
	}  
	return 0;
}

//////////////////////////////////////2nd Approach////////////////////////


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	// mistakes: used 2d dp instead of 3d; 
    // wrote line 22 before line 18;
    // 22. if(dp[x][y][steps]!=-1)return dp[x][y][steps];
    // 18. if(x<0 || y<0 || x>=N || y>=N)return 0;
    // error : Line 1034: Char 34: runtime error: addition of unsigned offset 
    // to 0x607000000090         overflowed to 0x607000000060 (stl_vector.h)
    // SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior 
	//  n ki value  kuch bhi ho no of calls 8 he rahaigee
    // /usr/bin/../lib/gcc/x86_64- linux-gnu/9/../../../../include/c++/9/bits/stl_vector.h:1043:34
	
	double func(int N,int x, int y, int steps, vector<vector<vector<double>>>&dp){
	    if(x<0 or y<0 or x>=N or y>=N)return 0;
	    
	    if(steps==0)return 1;
	    
	    if(dp[x][y][steps]!=0)return dp[x][y][steps];
	    
	    double ans = func(N,x-2,y-1,steps-1,dp)+
	    func(N,x-2,y+1,steps-1,dp)+
	    func(N,x+2,y-1,steps-1,dp)+
	    func(N,x+2,y+1,steps-1,dp)+
	    func(N,x-1,y-2,steps-1,dp)+
	    func(N,x+1,y-2,steps-1,dp)+
	    func(N,x-1,y+2,steps-1,dp)+
	    func(N,x+1,y+2,steps-1,dp);
	    
	    ans/=8;
	    return dp[x][y][steps] = ans;
	}
	
	double findProb(int N,int start_x, int start_y, int steps)
	{
	    vector<vector<vector<double>>> 
	    dp(N+1, vector<vector<double>>(N,vector<double>(steps+1)));
	    return func(N,start_x,start_y,steps,dp);
	    
	}
};

// { Driver Code Starts.
int main(){
	
}  // } Driver Code Ends