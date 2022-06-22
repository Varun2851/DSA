//https://practice.geeksforgeeks.org/problems/three-way-partitioning/1

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        // code here 

        //we will lesser than a and greater than b numbers only . Elemenets which are 
        // in between of both these number will automatically arranged

        //1 Use three pointer start , i , end;

        int start = 0;
        int end = arr.size()-1;
        int i = 0;

        while(i<=end){
        	if(arr[i] < a){
        		swap(arr[i] , arr[strat]);
        		i++;
        		start++;
        	}
        	else if(arr[i]>b){
        		swap(arr[i],arr[end]);
        		end--;
        	}
        	else{
        		i++; // scip those elements which are greater than a and b
        	}
        }
    
    }
};

