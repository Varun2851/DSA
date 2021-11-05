//WAP to check if a number is even or odd
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the value of X :"<<endl;
    cin>>x;

    if(x&1){
        cout<<"Number is odd"<<endl; //Last bit will tell about the nature 1 & 1 = 1 , 0 & 1 = 0
    }
    else{
        cout<<"Number is even"<<endl;
    }
    return 0;
}