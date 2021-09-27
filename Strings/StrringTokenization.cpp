// Tokenizing  a string denotes spiliting a string with respect to some delimiters
// Input = "Today is sunny day"
//Output = "today","is","sunny","day"

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

	string input ;
	getline(cin,input);

	//create a string stream onject
	stringstream ss(input);

	string token;
	vector<string>tokens ;
	while(getline(ss,token,' ')){
		tokens.push_back(token);
	}

	for(auto token : tokens){
		cout<<token<<" ,";
	}

	return 0;
}
