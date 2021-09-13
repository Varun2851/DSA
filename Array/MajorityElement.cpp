#include<iostream>
using namespace std;

void MajorityElement(int arr[] , int n){
    int max_count = 0;
    int indx = -1;

    for(int i =0; i<n; i++){
        int count = 0;
        for(int j =0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count>max_count){
            max_count = count;
            indx = i;
        }   
    }
    if(max_count>n/2){
        cout<<arr[indx]<<endl;
    }
    else{
        cout<<"No Matching element "<<endl;
    }
}
int main(){

    int arr[] = {1,1,2,1,3,5,1};
    int n = sizeof(arr)/sizeof(int);

    MajorityElement(arr,n);

    return 0;
}