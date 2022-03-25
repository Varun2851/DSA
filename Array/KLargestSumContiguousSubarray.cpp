//kth largest contiguous subarray sum


#include <algorithm>
#include <vector>
int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
    int prefixsum[10000] = {0};
    prefixsum[0] = arr[0];
    int n = arr.size();
    vector<int>ans;
    
    for(int i = 1; i<n; i++){
        prefixsum[i] = prefixsum[i-1] + arr[i];
    }
    
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            int subarraysum = i>0 ? prefixsum[j] - prefixsum[i] : prefixsum[j];
            ans.push_back(subarraysum);
        }
    }
    
    sort(ans.begin(),ans.end(),greater<int>());
    return ans[k-1];
}

/////////////////////2nd Approach////////////////////////////////////

/*
    Time Complexity: O(N ^ 2 * log(K)
    Space Complexity: O(K)

    where ‘N’ is the length of the given array/list.
	And 'K' is the given number.
*/

#include <queue>

int getKthLargest(vector<int> &arr, int k)
{
	int n = arr.size();

	//	To store the subarray sums.
	priority_queue<int, vector<int>, greater<int>> minHeap;

	for (int i = 0; i < n; i++)
	{
		//	To store the current subarray sum.
		int sum = 0;
		for (int j = i; j < n; j++)
		{
			sum = sum + arr[j];

			if (minHeap.size() < k)
			{
				minHeap.push(sum);
			}
			else
			{
				if (minHeap.top() < sum)
				{
					//	Pop the minimum element.
					minHeap.pop();
					minHeap.push(sum);
				}
			}
		}
	}

	//	Top-most element is the k-th largest subarray sum.
	return minHeap.top();
} 