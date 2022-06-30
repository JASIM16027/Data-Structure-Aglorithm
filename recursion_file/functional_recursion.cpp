#include<bits/stdc++.h>
using namespace std;
// functional recursion
int printsum(int n){
    if(n==0){
        return 0;
    }
    return n+printsum(n-1);
}
int main(){
    int n;
    cin>>n;
    int total = printsum(n);
    cout<<total<<" ";

    return 0;
}