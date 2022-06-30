#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12,-1,-7,8,-18,30,16,28,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    vector<int>ans;
    for(int i=0; i<n;i++){
        int f = 0;
        for(int j=i; j<i+k;j++){
            
            if (arr[j]<0){
                f = 1;
                ans.push_back(arr[j]);
                break;
            }
        }
        if (f==0 && i<n-2){
                ans.push_back(0);
            }
    }

    for(auto it: ans) cout<<it<<" ";
    return 0;
}