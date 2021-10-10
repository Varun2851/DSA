#include<iostream>
#include<cstring>
using namespace std;
int Palindrome(string A,int n) {

   // int n = strlen(A);

    bool flag = false;
    
    for(int i =0; i<n; i++){
        for(int j = n-1; j>=0; j--){
            
            if(A[i]==A[j]){
                flag = true;
            }
        }
    }
    if(flag == true){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    string s1;
    getline(cin,s1);

    int n = s1.length();
    if(Palindrome(s1,n)==1){
        cout<<"True"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
