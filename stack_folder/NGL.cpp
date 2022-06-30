#include<bits/stdc++.h>
using namespace std;

void NGL(int arr[],vector<int>&ans, int n){
    stack<int>s;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            ans.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i]){
            ans.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if (s.size()==0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
}
int main(){
    int arr[] = {1,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    NGL(arr,ans,n);
    for(auto it: ans) cout<<it<<" ";
    return 0;
}