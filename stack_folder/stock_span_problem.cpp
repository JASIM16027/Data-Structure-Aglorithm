#include<bits/stdc++.h>
using namespace std;

void NGL(int arr[],vector<int>&ans, int n){
    stack<pair<int, int>>s;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            ans.push_back(-1);
        }
        else if(s.size()>0 && s.top().first>arr[i]){
            ans.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i]){
                s.pop();
            }
            if (s.size()==0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }

    for(int i=0;i<ans.size();i++){
        ans[i] = i-ans[i];
    }
}
int main(){
    int arr[] = {100,80,60,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    NGL(arr,ans,n);
    for(auto it: ans) cout<<it<<" ";
    return 0;
}