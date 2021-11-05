#include<iostream>
using namespace std;

void setIthBit(int &n,int i){

	int mask = (1<<i);
	n = (n|mask);
    cout<<n;
}

int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;

    setIthBit(n ,i);
    return 0;
}