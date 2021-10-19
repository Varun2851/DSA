#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool compare(string X , string Y){
	return X+Y < Y+X;
}

int main() 
{
	string arr[] = {"a","ab","aba"};
	int n = sizeof(arr)/sizeof(string);

	sort(arr , arr+n , compare);

	for(auto ch : arr){
		cout<<ch;
	}
	return 0;
}