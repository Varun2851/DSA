#include<iostream>
#include<vector>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	//char s[10000] = {'1','a','b','c','\0'}; this provides less flexibility

	// string S = "Hello World"; // Dynamic array
	// cout<< S << endl;

	// string S1;
	// getline(cin ,S1,'.');
	// cout<<S1<<endl; 

	// for(char ch: S1){  // Iteration over the string
	// 	cout<<ch<<" , ";
	// }

		int n = 5;
		vector<string>arr;

		string temp;

		while(n--){
			getline(cin,temp);
			arr.push_back(temp);
		}

		for(string X: arr){
			cout<<X<<","<<endl;
		}

	// string Paragraph = "We are learning about STL Strings";

	// // now I want to search any word in thr string 
	// string Word;
	// getline(cin,Word);

	// // find function
	// cout<<Paragraph.find(Word)<<endl;


	return 0;
}