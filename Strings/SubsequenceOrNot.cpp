
#include <iostream>
#include<cstring>
using namespace std;

bool SubsequenceRec(string s1 , string s2 , int n , int m, int i , int j){
	//base case
	if(j == m){
		return true;
	}
	if(i == n){
		return false;
	}
	// Recursive case
	if(s1[i] == s2[j]){
		
		return(s1,s2,n,m,i+1, j+1);
	}
	else{
		return(s1,s2,n,m,i+1,j);
	}
}

int main() {
	
	string s1;
	string s2;

	getline(cin,s1);
	getline(cin,s2);

	int n = s1.size();
	int m = s2.size();

	if(SubsequenceRec(s1,s2,n,m,0,0)){
		cout<<"true";
	}
	else{
		cout<<"False";
	}

	return 0;
}

