#include<bits/stdc++.h>
using namespace std;

void RemoveDuplicate(int arr[], int n){
  
    int check[n];
    int check1[n];
    vector<int>ans;
   
    for(int i=0;i<n;i++) check[i]=1, check1[i]=0;
    for(int i=0;i<n;i++){
        int flag = 0;
        if (check[i]==1){
            for(int j=i+1;j<n;j++){
                
                if (arr[i]==arr[j]){
                    flag = 1;
                    
                    check[j]=0;
                }
                
            }
            if (flag==1) ans.push_back(arr[i]);
        }
    }

    for(int i=0;i<n;i++){
        if (check[i]==1){
            cout<<arr[i]<<" ";
        }

    }
    cout<<endl;
    for(auto it: ans)cout<<it<<" ";


    
}
int main(){
    int arr[] = {1,1,2,3,4,4,5,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    RemoveDuplicate(arr,n);
    return 0;
}