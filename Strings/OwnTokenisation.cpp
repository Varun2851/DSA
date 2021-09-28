#include<iostream>
using namespace std;

char *mystrtok(char *str,char delim){

	static char *input = NULL;

	if(str != NULL){
		input = str;
	}
 
	if(input == NULL){
		return NULL;
	}

	 char * token = new char[strlen(input)+1];
	int i =0;
	for(; input[i] != '\0'; i++){
		if(input[i] != delim){
			token[i] = input[i];
		}
		else{
			token[i] = '\0';
			input = input +i+1; // updated  static variable here
			return token;
		}
	}
	token[i] = '\0';
	input = NULL;
	return token;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char s[10000];
	cin.getline(s,10000);
	//strtok()
	char *token = mystrtok(s,' ');

	while(token != NULL){
		cout<<token<<endl;
		token = mystrtok(NULL,' ');
	}

	return 0; 
}