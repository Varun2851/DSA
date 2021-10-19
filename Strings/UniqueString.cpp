#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;

string unique_substring(string str){
    
    // abcabcbb ->string

	int i = 0;
	int j = 0;

	int window_len = 0;
	int max_window_len = 0;
	int start_window = -1;


	unordered_map<char,int> m;


	while(j < str.length()){

		char ch = str[j];
		// ch = a
		// ch = b
		// ch = c
		// ch = a
		// ch = b
		// ch = c
		// ch = b
		// ch = b

		//if it is inside hashmap & its idx >= start of the current window
		if(m.count(ch) and m[ch]>=i){
			//later on..
			i = m[ch] + 1; // (7)
			window_len = j - i; //updated remaining window len excluding current char
		}

		//update the last occ 
		 m[ch] = j;
		//m.insert({ch,j});
		//(a:3)
		//(b:6)
		//(c:2)
		//()

		window_len++;
		//(3) ,(2) ,(1)
		j++; // (j = 8, )

		//update max_window_len at every step
		if(window_len > max_window_len){
			max_window_len = window_len;
			start_window = i; //(1 )
		}
	}
	return str.substr(start_window,max_window_len);	 
}


int main(){

	string input = "abcabcbb";
	//cin>>input;

	cout << unique_substring(input);


	return 0;
}