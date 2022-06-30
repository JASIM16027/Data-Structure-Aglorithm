#include<bits/stdc++.h>
using namespace std;
// kth largest element
int main(){
    int arr[] = {7,10,4,3,20,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>, greater<int>>minh;
    int k=3;
    for(int i=0;i<n;i++){
        minh.push(arr[i]);
        if (minh.size()>k){
            minh.pop();
        }
    }
    cout<<minh.top()<<endl;
    return 0;
}