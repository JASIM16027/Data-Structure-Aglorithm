#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr []={1,5,2,3,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n/2;i++){
        int temp = arr[n-i-1];
        arr[n-i-1] = arr[i];
        arr[i] = temp;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}