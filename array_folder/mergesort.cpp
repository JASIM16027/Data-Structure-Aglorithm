#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int r); // function prototype

void mergesort(int arr[],int l, int r){
    if(l<r)
    {

        int mid = (l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    
    }
    

}
void merge(int arr[],int l,int mid, int r){
    int n = mid-l+1;

    int m = r-mid;
    cout<<l<<" " <<mid<<" "<<r <<endl;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++){
        a[i] = arr[l+i];
    }
    for(int j=0;j<m;j++){
        b[j] = arr[mid+1+j];
    }

    int i=0;
    int j = 0;
    int k = l;

    while (i<n && j<m)
    {
        if (a[i]<b[j])
        {
            arr[k] = a[i];
            k++;
            i++;

        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i<n){
        arr[k] = a[i];
            k++;
            i++;

    }

    while (j<m){
        
            arr[k] = b[j];
            k++;
            j++;

    }

}
int main(){

    int arr[] = {1,2,5,3,2,6,7};
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,l,r-1);
    for(int i=0;i<r;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}