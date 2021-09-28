#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[1000] = "abcde";
	char b[1000];
	// calculate length (visible character)
	cout<<strlen(a)<<endl;
	//string copy 
	strcpy(b,a);
	cout<<b<<endl;
	// string compare
	cout<<strcmp(a,b)<<endl;
	
	char web[] = "www.";
	char domain[] = "Dell.com";
	
	cout<<strcat(web,domain)<<endl;
	
	return 0;
}