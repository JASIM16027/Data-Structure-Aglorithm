// board game path count (down+right)
#include<bits/stdc++.h>
using namespace std;

int tilingWays(int n){
    if(n<=1){
         return n;
    }

    return tilingWays(n-1)+tilingWays(n-2);
}

int main(){
    int n;
    cin>>n;
    
    int count = tilingWays(n);
    cout<<count<<endl;
    return 0;
}