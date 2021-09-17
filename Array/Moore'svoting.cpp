#include<iostream>
#include<vector>
using namespace std;

int MajorityElement(vector<int>&nums){
    int cnt = 0;
    int element = 0;

    for(int x : nums){
        if(cnt == 0){
            element = x;
        }
        if(x == element){
            cnt += 1;
        }
        else{
            cnt -= 1;
        }
    }
    return element;
}
int main(){

    vector<int>nums = {1,1,2,1,3,5,1};

    cout<<MajorityElement(nums)<<endl;

    return 0;
}