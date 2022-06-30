#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
void subset_sum(vector<int>&s,int total,int ind){
    if (ind==s.size()){
        ans.push_back(total);
        return ;
    }
    subset_sum(s,total,ind+1);
    subset_sum(s,total+s[ind],ind+1);
    
}
int main(){
    vector<int>s={3,1,2};
    int total=0;
    subset_sum(s,total,0);
    sort(ans.begin(),ans.end());
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}