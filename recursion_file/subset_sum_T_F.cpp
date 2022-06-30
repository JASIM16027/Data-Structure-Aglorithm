#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
bool subset_sum(vector<int>&s,int total,int ind, int target){
    if (ind==s.size()){
        //ans.push_back(total);
        if (total==target){
            return true;
        }
        return false ;
    }
    bool not_taken = subset_sum(s,total,ind+1, target);
    bool taken = subset_sum(s,total+s[ind],ind+1, target);

    return not_taken || taken;
    
}
int main(){
    vector<int>s={3,1,2};
    int total=0, target=6;
    cout<<subset_sum(s,total,0,target)<<endl;
    
    return 0;
}