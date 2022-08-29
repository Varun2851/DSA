//https://leetcode.com/submissions/detail/786518186/
class Solution {
public:
    int garbageCollection(vector<string>& g, vector<int>& travel) {
        
        vector<pair<int,pair<int,int>>> v;
        
        int lastG=-1,lastM=-1,lastP=-1;
        
        for(int i=0;i<g.size();i++){
            int gl=0,p=0,m=0;
            for(int j=0;j<g[i].size();j++){
                if(g[i][j]=='G'){
                    gl++;
                }   
                else if(g[i][j]=='P'){
                    p++;
                }
                else{
                    m++;
                }
            }
            
            v.push_back({gl,{p,m}});
            
            if(gl>0){
                lastG=i;
            }
            if(p>0){
                lastP=i;
            }
            if(m>0){
                lastM=i;
            }
            
        }
        
        int ans1=0,ans2=0,ans3=0;
        // cout<<lastG<<" "<<lastP<<" "<<lastM<<endl;
        
        for(int i=0;i<g.size();i++){
            
            if(i<=lastG){
                if(i>0)
                ans1+=travel[i-1];
                ans1+=v[i].first;
            }
            if(i<=lastP){
                if(i>0)
                ans2+=travel[i-1];
                ans2+=v[i].second.first;
            }
            if(i<=lastM){
                if(i>0)
                ans3+=travel[i-1];
                ans3+=v[i].second.second;
            }
        }
        
        // cout<<ans1<<" "<<ans2<<" "<<ans3<<" ";
        return ans1+ans2+ans3;
    }
};