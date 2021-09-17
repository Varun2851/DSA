//Plus 1
#include<bits/stdc++.h>
using  namespace std;

void INCREAMENTONE(vector<int>&arr){
    int n = arr.size();

    // ADD 1 to last digit and find the carry

    arr[n-1] = arr[n-1]+1;
    int carry = arr[n-1]/10; // here we will get carry (10/10 = 1)
    arr[n-1] = arr[n-1]%10; 

    // Traverse from second last digit
    for(int i = n-2; i>=0; i--){

        if(carry == 1){
          arr[i] = arr[i]+1;
          carry = arr[i]/10;
          arr[i] = arr[i]%10;
          
        }
    }
    if(carry == 1){
        arr.insert(arr.begin() ,1);
    }
}
int main(){

    vector<int>arr{9,9,9,9};
    INCREAMENTONE(arr);

    //Print the array
    for(int i =0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}