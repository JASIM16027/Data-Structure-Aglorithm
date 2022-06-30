#include<iostream>
#include<climits>
using namespace std;
int kadane_algo(int arr[],int n){
    int curSum = 0;
    int maxSum = 0;
    for(int i=0;i<n;i++){
        curSum+=arr[i];
        if (curSum<0){
            curSum = 0;
        }

        maxSum = max(maxSum,curSum);

    }

    return maxSum;

}
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int wrapmaxSum = kadane_algo(arr,n);
    int nonwrapmaxSum = 0;
    int totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }

    nonwrapmaxSum = totalSum+kadane_algo(arr,n);
    cout<<nonwrapmaxSum<<endl;
    wrapmaxSum = max(nonwrapmaxSum,wrapmaxSum);
    cout<<nonwrapmaxSum<<endl;

    return 0;
}