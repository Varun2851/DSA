//1552. Magnetic Force Between Two Balls

class Solution {
public:
    bool Canplace(int Balls ,int n , vector<int>&position , int distance){
        int ball = 1; 
        int location = position[0];
        for(int i =1; i<=n; i++){
            int current_location = position[i];
            if(current_location - location >= distance){
                ball++;
                location = current_location;
                
            }
            if(ball == Balls){
                    return true;
                }
        }
        return false;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());
        int ans = -1;
        int start = 0;
        int end = position[n-1]-position[0];
        while(start <= end){
           long long int mid = (start+end)/2;
            bool canplace = Canplace(m ,n ,position, mid);
            if(canplace){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
};