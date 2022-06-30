#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int l,int h,int target){
    int mid = (l+h)/2;
    while (l<h)
    {
        if(arr[mid]==target) 
            return mid;
        else if (arr[mid]>target){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int l=0;
    int h = sizeof(arr)/sizeof(arr[0]);
    int res = binarysearch(arr,l,h-1, 7);
    if (res>0){
        cout<<"Target is found"<<endl;
    }
    else{
        cout<<"not found";
    }
}