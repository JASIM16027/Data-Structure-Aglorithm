#include<iostream>
#include<climits>
using namespace std;

void maxSum(int arr[], int n, int k){
    int i = 0;
    int j = 0;
    int sm = 0;
    int maxSm = INT_MIN;
    while(j<n){
        sm+=arr[j];
        //cout<<sm<<" ";
        if (j-i+1<k){
            j++;
        } 
        else if (j-i+1==k){
            maxSm = max(maxSm, sm);
            sm = sm-arr[i];
            i++;
            j++;

        }
    }
    cout<<maxSm<<endl;

}
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    maxSum(arr,n,k);


    return 0;
}