#include<iostream>
#include<climits>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr[i] = ele;
    }
    int maxsum = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = max(arr[i], sum+arr[i]);
        cout<<sum<<endl;
        maxsum = max(maxsum,sum);
    }
    cout<<maxsum<<endl;
    return 0;
}