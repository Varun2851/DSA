#include<iostream>
using namespace std;
void clearBit(int &n , int i){
    int mask = ~(1<<i);
    n = n&mask;
}
int main(){
    int x;
    cout<<"Enter the value of number :"<<endl;
    cin>>x;
    int i ;
    cout<<"Enter the value of place :"<<endl;
    cin>>i;

    clearBit(x ,i);
    cout<<x<<endl;
    return 0; 
}