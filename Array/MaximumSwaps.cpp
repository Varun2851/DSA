//https://leetcode.com/problems/maximum-swap/

class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        map<int ,int>mp;
        for(int i = 0; i<s.size(); i++){
            mp[s[i]-'0'] = i; // storing the index 
        }
        for(int i = 0; i<s.size(); i++){
            for(int j = 9; j>s[i]-'0'; j--){
                if(mp[j] > i){
                    swap(s[mp[j]] , s[i]);
                    return stoi(s); // stoi convert string back to number
                }
            }
        }
        return num;
    }
};