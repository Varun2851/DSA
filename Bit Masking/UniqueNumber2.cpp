#include<iostream>
using namespace std;

int main(){
    //Exp a = [1,1,2,3,5,3,5,7]
    // unique number = 2 ,7
    //Linear time , constant space 
    
    int n;
    int a[100005];
    cin>>n;
    int no;
    

    int res = 0; //store xor of all numbers
    for(int i = 0; i<n; i++){
        cin>>no;
        a[i] = no;
        res = res^no;
    }
    int temp = res;
    int pos = 0;
    while((temp&1)!=1){
        pos++;
        temp = temp>>1; // right shift
    }
    int mask = (1<<pos);
    // find those numbers which contain set bit at position pos
    int x = 0;
    int y = 0;

    for(int i = 0; i<n; i++){
        if((a[i]&mask)>0){
            x = x^a[i];
        }
    }
    y = res^x;
    cout<<min(x,y)<<endl;
    cout<<max(x,y)<<endl;
    return 0;
}