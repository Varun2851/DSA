#include<iostream>
using namespace std;

int fibo(int n)
{
	// base case
	if(n == 0){
		return n;
	} 
	if(n == 1){
		return n;
	}
	// recursive case
	return fibo(n-1) + fibo(n-2);
}

int main()
{ 

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
    
    cout<<fibo(n)<<endl;
    return 0;
}