#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=0;
    for(int i=2;i<n;i++){
        if (prime[i]==1){
            for(int j=i*2;j<n;j+=i){
                prime[j] = 0;
            }
        }
    }
    
    
    for(int i=0;i<n;i++){
        if (prime[i]==1)cout<<i<<" ";
    }
}