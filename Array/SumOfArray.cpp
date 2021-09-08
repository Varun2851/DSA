#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int sum = 0; 
    for(int i =0; i<n; i++){
        sum += arr[i];
    }
    cout<<"Sum of elements of Array is :"<<sum<<endl;
    
    return 0;
}