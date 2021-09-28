#include<iostream>  // Given a sentence , count the number of alphabets, digits and spaces in the sentences 
using namespace std;

int main(){
	
	//store and then count 
	// read one by one and then count 
	
	char ch;
	int alpha = 0;
	int space = 0;
	int digit = 0;
	ch = cin.get();
	
	while(ch != '\n'){
		if(ch>='0' and ch<='9'){
			digit++;
		}
		else if((ch>= 'a' and ch<='z' ) or (ch>='A' and ch<='B')){
			
			alpha++;
		}
		else if(ch == ' ' or ch=='\t'){
			space++;
		}
			
		ch = cin.get();
	}
	
	cout<<"Total Alphabet "<<alpha<<endl;
	cout<<"Total spaces "<<space<<endl;
	cout<<"Total digit "<<digit<<endl;

	return 0;
	
}