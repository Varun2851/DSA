#include<iostream>
#include<vector>
using namespace std;
void replace(char *str){
	
	int spaces = 0;  // 1. cal spaces;

	for(int i =0; str[i]!='\0'; i++){
		if(str[i]==' '){
			spaces++;
		}
	}
	int indx = strlen(str) + 2*spaces ;
	str[indx] = '\0'; 

	for(int i = strlen(str)-1; i>=0; i--){
		if(str[i] == ' '){
			str[indx-1] = '0';
			str[indx-2] = '2';
			str[indx-3] = '%';
			indx = indx-3;

		}
		else{
			str[indx-1] = str[i];
			indx--; 
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char input[10000];
	cin.getline(input,10000);
	replace(input);
	cout<<input;

	return 0;
}