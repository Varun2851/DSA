#include<iostream>
using namespace std;
int non_repeating(int arr[],int n){
    for(int i =0; i<n; i++){
        int j;
        for( j =0; j<n; j++){
            if(i != j and arr[i] == arr[j]){
                break;
            }
        }
        if(j==n){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[] = {-1,2,-1,3,2};
    int n = sizeof(arr)/sizeof(int);

    cout<<non_repeating(arr , n);

    return 0;
}