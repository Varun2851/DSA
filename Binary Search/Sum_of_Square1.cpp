
//Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.
// Input = 5 
// output = true
// Input = 3
// output = false;
#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	bool flag = false;
	for(long long int i = 0; i*i <= a; i++){
		//bool flag = false;
		long long int j;
		for( j = 0; j*j <= a; j++){
			if(i*i + j*j == a){
				cout<<"True"<<endl;
				flag = true;
				break;
			}
		}
		if(flag == true){
			break;
		}
	}

	if(flag == false){
		cout<<"false"<<endl;
	}	
	return 0;
}

