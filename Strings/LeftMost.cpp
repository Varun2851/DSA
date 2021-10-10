// left most repeating character
#include<iostream>
#include<cstring>
using namespace std;

int leftmost(string s1 ,int n){

    int freq[26] = {0}; //creating the frequency array to store the frequecy of character

    for(int i =0; i<n; i++){
        int indx = s1[i] -'a';
        freq[indx]++;
    }
    for(int j =0; j<26; j++){
        if(freq[j] > 1){
            return j;
        }
    }
    return -1;
}

int main(){

    string s1;
    getline(cin,s1);

    int n = s1.size();
    cout<<leftmost(s1,n);
    return 0;
}