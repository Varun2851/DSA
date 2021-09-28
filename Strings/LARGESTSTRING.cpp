#include<iostream>
using namespace std;
//Read N string , Print the largest string
int main(){
	 int n;
	 cin>>n;
	 cin.ignore(); // to ignore empty sentence , cin.ignore() is used , cin.get() can also be used here
	 char sentence[1000];
	 char largest[10000];
	 int largest_Length = 0;
	 
	 while(n--){
	 		cin.getline(sentence,1000); // first sentence is just a empty sentence 
	 		//cout<<sentence<<endl;
	 		int len = strlen(sentence);
	 		if(len>largest_Length){
	 			largest_Length = len;
	 			strcpy(largest,sentence);
			 }
	 		
	 }
	 cout<<"Largest sentence is :"<<largest<<endl;
	 return 0;
}