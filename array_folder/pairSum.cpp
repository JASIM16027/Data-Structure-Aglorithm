#include<iostream>
using namespace std;

bool pairSum(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<"index i : "<<i<<" "<<"index j : "<<j<<" "<<endl;
                return true;
            }
        }

    }
    return false;
}
int main(){
    int n,k;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k; 
    bool res = pairSum(arr,n,k);
    
    return 0;
}