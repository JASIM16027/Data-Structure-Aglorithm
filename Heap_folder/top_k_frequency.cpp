#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,1,1,3,2,2,4};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<pair<int,int>, vector<pair<int,int>>, 
    greater<pair<int,int>> >minh;
    vector<pair<int,int>>res;
    int k=3;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it = mp.begin(); it!=mp.end();it++){
        minh.push({it->second,it->first});
        if (minh.size()>k){
            minh.pop();
        }
    }
    while (minh.size()>0)
    {
        res.push_back({minh.top().first,minh.top().second});
        minh.pop();
    }

    for(auto it: res)cout<<it.second<<"-->"<<it.first<<endl;
    
    return 0;
}