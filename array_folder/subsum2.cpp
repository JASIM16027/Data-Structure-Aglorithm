#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int best = 0;
    for(int i=0;i<n;i++){
        int cursum = 0;
        for(int j=i; j<n; j++){
            cursum+=arr[j]; // cumulative sum
            best =max(best, cursum);

        }
    }
    cout<<best<<endl;
    return 0;
}