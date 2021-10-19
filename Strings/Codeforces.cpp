#include<iostream>
using namespace std;
int main()
{
	string str = "ABACAB";
	int count = 0;

	int n = str.size();

	
	for(int i =0; str[i] != '\0'; i++){
		char ch = str[i];
		if(ch == 'B'){
			count++;
		}
	}
	if(2*count == n){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}