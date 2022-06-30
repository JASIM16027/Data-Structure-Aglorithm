#include<bits/stdc++.h>
using namespace std;
// parameterized way of recursion
void sumprint(int n,int &total){
    if(n==0){
        return ;
    }
    sumprint(n-1, total);
    total +=n;
}
int main(){
    int n, total=0;
    cin>>n;
    sumprint(n,total);
    cout<<total<<" ";
    return 0;
}