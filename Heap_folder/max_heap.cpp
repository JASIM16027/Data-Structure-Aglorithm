#include<bits/stdc++.h>
using namespace std;
// kth smallest element
int main(){
    int arr[] = { 7,10,4,3,20,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    priority_queue<int>maxH;
    for(int i=0;i<n;i++){
        maxH.push(arr[i]);
        if (maxH.size()>k){
            maxH.pop();
        }
    }
    cout<<maxH.top()<<endl;

    return 0;
}