#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end){
    
    if (start<end){
        swap(arr[start],arr[end]);
        reverseArray(arr,start+1,end-1);
    }
    
   
}
int main(){
    int arr[] ={2,3,7,6,4};
    int l=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,0,n-1);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}