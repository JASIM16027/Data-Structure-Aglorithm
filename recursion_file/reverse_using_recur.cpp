#include<bits/stdc++.h>
using namespace std;
void fun_reverse(int i,int n, int arr[]){
    if (i>=int(n/2)){
        return ;
    }
    //swap(arr[i],arr[j]);
    //fun_reverse(i+1,j-1,arr);
    //swap(arr[i],arr[j]);
    swap(arr[i],arr[n-i]);
    fun_reverse(i+1,n,arr);

}
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i =0; i<n;i++){
        int val;
        cin>>val;
        arr[i] = val;
    }
    fun_reverse(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}