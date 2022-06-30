#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // -1 4 7 2
    int arr[n];
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr[i] = ele;
    }
    int best = 0;
    for(int i=0; i<n;i++){
        for(int j=i;j<n;j++){
            int subsum = 0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                subsum+=arr[k];
                
            }
            cout<<endl;
            best=max(best,subsum);
        }
        //cout<<"best : "<<best<<" ";
    }
    cout<<endl;
    cout<<"final best : "<<best<<endl;
    return 0;
}