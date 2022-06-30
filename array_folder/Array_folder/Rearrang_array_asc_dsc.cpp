#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n){
    sort(arr, arr+n);
    int i=(n/2)+1,j=n-1;
    while (i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[] = {1,3,4,2,3,6,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}