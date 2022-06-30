#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,2,3,4,5,3,3,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>frequencyCount;
    for(int i=0;i<n;i++){
        frequencyCount[arr[i]]++;
    }
    for(auto it :frequencyCount){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}