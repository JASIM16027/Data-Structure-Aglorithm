#include<bits/stdc++.h>
using namespace std;

void RemoveDuplicate(int arr[], int n){
  
    //int check[n];

    //vector<int>ans;
   
    //for(int i=0;i<n;i++) check[i]=1;
    for(int i=0;i<n;i++){
        bool flag = 0;
        // if (check[i]==1){
        //     for(int j=i+1;j<n;j++){
                
        //         if (arr[i]==arr[j]){
        //             flag = 1;
        //             check[j]=0;
        //         }
                
        //     }
           // if (flag==0) ans.push_back(arr[i]);
        //}
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                flag = 1;
                break;
            }
        }
        if (flag==0)cout<<arr[i]<<" ";
        }
    


   // for(auto it: ans)cout<<it<<" ";
    
}
int main(){
    int arr[] = {1,2,3,4,4,5,2,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    RemoveDuplicate(arr,n);
    return 0;
}