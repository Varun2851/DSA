//https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n  = nums.size();

        //1.first we will try to know the start and end of the unsorted part
        //Maintain two variable to mark start and end
        int low = 0, high = n-1;
        while(low+1 < n and nums[low] <= nums[low+1]){
        	low++;
        }
        while(high-1 >= 0  and nums[high] => nums[high-1]){
        	high--;
        }
        int subarrayMIN = INT_MAX;
        int subarrayMAX = INT_MIN;
        for(int i = low; i<=high; i++){
        	//For this test case
        	// 4 6 1 2 5 8 3 7 ->After sorting the part this becomes - 4 1 2 3 5 6 8 7
        	//Do you it is sorted , ANS is NO
        	//so now we will tackel this , by iterating from low to high and takes out 
        	// minimum and maximum element 
        	// after gettng minimum and maximum element we will compare to the next ele 
        	//which are not the part of our subarray
        	subarrayMAX = max(nums[i] , subarrayMAX);
        	subarrayMIN = min(nums[i] , subarrayMIN);

        }
        while(low-1 > = 0 and nums[low-1] > subarrayMIN){
        	low--; //Traverse back
        }
        while(high+1 <= n-1 and nums[high+1] < subarrayMAX){
        	high++;
        }
        return high-low+1;
    }
};

// sample test case  = nums = [2,6,4,8,10,9,15]
// edge case = 4 6 1 2 5 8 3 7