#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
    int i=0, j=n-1;
    while (i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
        
    }
}
int main(){
    int arr[]={1,3,4,2,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}