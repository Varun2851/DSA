#include<iostream>
using namespace std;

int main(){
	char sentence[100];

	char temp = cin.get();
	
	while(temp != '\n'){
		cout<< temp;
		//update the value of temp
		temp = cin.get();
	}
	return 0;
}