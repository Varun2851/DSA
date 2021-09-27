#include<iostream>
#include<cstring>
#include<sstream>
#include<vector>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char input[10000];
	cin.getline(input,10000);

	//strtok
	// cout<<strtok(input," ")<<endl;
	// cout<<strtok(input," ")<<endl;
	// cout<<strtok(input," ")<<endl; giving the same output 
	// cout<<strtok(input," ")<<endl;

	// cout<<strtok(input," ")<<endl; // internally maintain the state of the string you passed in the last fn call
	// cout<<strtok(NULL," ")<<endl;
	// cout<<strtok(NULL," ")<<endl;
	// cout<<strtok(NULL," ")<<endl;

	char *token = strtok(input," ");
	while(token != NULL){
		cout<<token<<endl;  // first we are printing then inserting the NULL
		token = strtok(NULL , " ");
	}
	

	return 0;
}