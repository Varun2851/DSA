#include<iostream>
using namespace std ;

int length(char *a){
	int cnt =0;
	for(int i =0; a[i] != '\0'; i++){
		cnt++;
	}
	return cnt;
}
void reverse(char *a){
	int i =0; int j = length(a)-1;

	while(i<j){

		swap(a[i],a[j]);  // swaping each character 

		i++;
		j--;
	}

}
int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char a[100];
	cin.getline(a,100); // reading with white spaces

	cout<<a<<endl;
	reverse(a);
	cout<<a;

	return 0;
}