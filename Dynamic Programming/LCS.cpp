#include<bits/stdc++.h>
using namespace std;

int lcs(string s, string t){
	//base case
	if(s.size() == 0 || t.size() == 0){
		return 0;
	}

	//recursive case
	if(s[0] == t[0]){
		return 1 + lcs(s.substr(1) , t.substr(1));
	}
	else{
		int x = lcs(s.substr(1),t);
		int y = lcs(s,t.substr(1));
		int z = lcs(s.substr(1),t.substr(1));
        return max(x,max(y,z));
	}
	
}
int main(){

	

	string s;
	string t;
	cin>>s;
	cin>>t;

	int ans = lcs(s,t);

	cout<<ans<<endl;
	return 0;
}