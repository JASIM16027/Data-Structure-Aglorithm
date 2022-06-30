#include<bits/stdc++.h>
using namespace std;

int  arrsum(int arr[], int n){
    if (n==0){
        return 0;
    }
    return n+ arrsum(arr,n-1);

}
int main(){

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = arrsum(arr,n);
    cout<<res<<endl;
    return 0;
}