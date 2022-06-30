#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int d){
    if (d==0){
        return n;

    }
  
    return gcd(d,n%d);
}
int main(){
    int n,d;
    cin>>n>>d;
    cout<<gcd(n,d);
    cout<<endl;
    cout<<(n*d)/gcd(n,d)<<endl;
    return 0;
}