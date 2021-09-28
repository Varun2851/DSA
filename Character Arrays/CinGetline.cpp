#include<iostream>
using namespace std;

int main(){
	
//	char sentence[1000];
//	
//	cin.getline(sentence,1000);
	
	char paragraph[1000];
	cin.getline(paragraph,1000,'.'); // use of delimitor
	
	cout<<paragraph<<endl;
	
//	cout<<sentence;
	return 0;
	
}