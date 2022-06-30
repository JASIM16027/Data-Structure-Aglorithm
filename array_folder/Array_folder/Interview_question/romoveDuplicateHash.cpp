#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] ={1,2,1,2,3,6,5,4,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    map<int,int>mp;
    
    // for(int i=0;i<n;i++){
    //    mp[arr[i]]++;
            
    // }
    // for(auto it:mp)cout<<it.first<<" ";

    for(int i=0;i<n;i++){
        if (mp.find(arr[i])==mp.end()){
            cout<<arr[i]<<" ";
            mp[arr[i]]++;

        }
            
    }

    return 0;
}