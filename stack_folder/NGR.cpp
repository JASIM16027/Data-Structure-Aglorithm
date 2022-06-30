#include<bits/stdc++.h>
using namespace std;

void NGR(int arr[], int n, vector<int>&ans){
    
    stack<int>s;

    for(int i=n-1;i>=0;i--){
        if (s.size()==0){
            ans.push_back(-1);
        }

        else if(s.size()>0 && s.top()>arr[i]){
            ans.push_back(s.top());
        }

        else if (s.size()>0 && s.top()<=arr[i]){
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
    vector<int>ans;
    int n = sizeof(arr)/sizeof(arr[0]);
    NGR(arr,n,ans);
    reverse(ans.begin(), ans.end());
    for(auto it: ans)cout<<it<<" ";
}