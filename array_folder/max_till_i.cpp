#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        if (mx<arr[i]){
            mx = arr[i];
        }
        ans.push_back(mx);
    }

    for(auto it: ans)cout<<it<<" ";
    return 0;
}