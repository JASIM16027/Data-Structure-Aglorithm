#include<bits/stdc++.h>
using namespace std;
void rotateArray(int arr[], int i,int j){
    while (i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    rotateArray(arr,0,n-k-1);
    rotateArray(arr,n-k,n-1);
    rotateArray(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}