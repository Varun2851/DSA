//Sum of two Array
#include<bits/stdc++.h>
using namespace std;

void Sum(int arr1[] , int arr2[] , int n1, int n2,int n3,int output[]){

    int i = n1-1;
    int j = n2-1;
    int k = n3-1; 
    int carry = 0;

    while(i>=0 and j>=0){

        int sum = arr1[i]+arr2[j]+carry;
        output[k] = sum%10;
        carry = sum/10;

        i--;
        j--;
        k--;
    }
    while(i>=0){
        int sum = arr1[i]+carry;
        output[k] = sum%10;
        carry = sum/10;
        i--;
        k--;
    }
    while(j>=0){
        int sum = arr2[j] + carry;
        output[k] = sum %10;
        carry = sum/10;
        j--;
        k--;
    }
        output[0] = carry;

    for(int i =0; i<n3; i++){
        cout<<output[i]<<" ";
    }
}

int main(){

    int arr1[] = {9,2,3,4,5};
    int arr2[] = {9,5,0,7,9,0};

    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);

    int n3 = max(n1,n2)+1;
    
    int output[n3];

    Sum(arr1,arr2,n1,n2,n3,output);

    return 0;
}