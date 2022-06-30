#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,2,3,1,2,5,4,4,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
   
    vector<bool>visit(n,false);
    for(int i=0;i<n;i++){
        if (visit[i]==true)continue;
        int count=0;
        for(int j=i;j<n;j++){
            if (arr[i]==arr[j] && visit[j]==false){
                count++;
                visit[j] = true;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
}