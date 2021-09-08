#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int arr[] = {1,-8,5,-7,0,6,3};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Before sorting :"<<endl;

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Bubble sort
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<=n-2-i; j++){
            if(arr[j]>arr[j+1]){
              //  swap(arr[j] , arr[j+1]);  // inbuilt swap.
                int temp = arr[j];          // swap using temp variable 
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"After sorting :"<<endl;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}