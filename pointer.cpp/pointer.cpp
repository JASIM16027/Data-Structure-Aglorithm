#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,20,30,40};
    
    int *ptr = arr;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<endl;
        cout<<"arr : ";
        cout<<*(arr+i)<<endl;
        // arr++ not valid
    }
    return 0;
}