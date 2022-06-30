#include<bits/stdc++.h>
using namespace std;
int calculateArraySum(int arr[], int n){
    if (n==0) return arr[0];
    return arr[n]+calculateArraySum(arr,n-1);
}
int main(){
    int arr[] = {1,2,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = calculateArraySum(arr,n-1);
    cout<<sum<<endl;
    //int Initialsum=0;
    //cout<<accumulate(arr, arr + n, Initialsum);
    
    return 0;
}