//Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.
// Input = 5 
// output = true
// Input = 3
// output = false;
#include<iostream>
using namespace std;

bool Binary(int start , int end , int c)
{
  	if(start>end){
  		return false;  
  	}
  	int mid = (start + end)/2;

  	if(mid * mid == c){
  		return true;
  	}
  	else if(mid * mid < c){
  		return Binary(mid+1 , end , c);
  	}
  	else{
  		return Binary(start , mid-1 , c);
  	}
	  
}

int main()
{
	int  a;
	cin>>a;
    bool flag = false;
	for(int i = 0; i*i <= a; i++){
		int b = a-(i*i);
		if(Binary(0, b, b) == true){
			flag = true;
		}
	}
	if(flag == true){
		cout<<"True"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}