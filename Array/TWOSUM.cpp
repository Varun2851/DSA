
#include <bits/stdc++.h>
using namespace std;

// void solve(int *arr , int target , int n){
//     for(int i = 0; i<n; i++){
//         int x = arr[i];
//         int y = target-x;
//         for(int j = 1; j<n; j++){
//             if(arr[j] == y){
//                 cout<<i<<" "<<j;
//             }
//         }
//     }
// }



//////////////////////Two Pointer Approach////////////////////

// void solve(int *arr , int target , int n){
//     int i = 0;
//     int j = n-1;

//     while(i<j){
//         if(arr[i]+arr[j] == target){
//             cout<<arr[i]<<" "<<arr[j];
//             break;
//         }
//         else if(arr[i]+arr[j] > target){
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
// }

//////////////////////////////////////Hashmap Approach/////////////////////////////////////

void solve(int*arr , int target , int n){
    unordered_set<int>s;
    vector<int>result;

    for(int i = 0; i<n; i++){
        int x = target-arr[i];

        if(s.find(x) != s.end()){
            result.push_back(x);
            result.push_back(arr[i]);
           // return result;
        }
        else{
            s.insert(arr[i]);
        }
    }
    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}


int main() {
	// your code goes here
    int arr[1000];
    int n;
    cin>>n;
    int target;
    cin>>target;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    //sort(arr , arr+n);
    solve(arr , target ,n);
	return 0;
}
