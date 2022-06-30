#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n)
{
    int maxVal = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxVal < arr[i])
        {
            maxVal = arr[i];
        }
    }
    int count[maxVal+1];
    for(int i=0;i<=maxVal;i++){
        count[i]=0;
    }

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=maxVal;i++){
        count[i]+=count[i-1];
    }
    int tempArr[n+1];
    //for(int i=0;i<n;i++)tempArr[i]=0;
    for(int i=n-1;i>=0;i--){
        tempArr[--count[arr[i]]]=arr[i];
       
    }
    for(int i=0;i<n;i++){
        arr[i] = tempArr[i];
    }
    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 1, 1, 2, 3, 2, 4, 5, 5, 5, 7, 7, 6, 5, 5, 3, 2, 1,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    countSort(arr, n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}