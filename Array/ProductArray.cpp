 //Product of Array
#include <iostream>
using namespace std;
int main() {
   int arr[] = {10,3,5,6,2};
   int n = sizeof(arr)/sizeof(int);
   
   int left[n];
   int right[n];
   int product[n];

   left[0] = 1;
   right[n-1] = 1;

   for(int i =1; i<n; i++){
       left[i] = left[i-1]*arr[i-1];
   }

   for(int j = n-2; j>=0; j--){
       right[j] = right[j+1]*arr[j+1];
   }
   for(int i =0; i<n; i++){
       product[i] = left[i]*right[i];
   }
   
   for(int i =0; i<n; i++){
       cout<<product[i]<<" ";
   }

   return 0;
}
