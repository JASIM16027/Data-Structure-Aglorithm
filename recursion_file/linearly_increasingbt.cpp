#include<bits/stdc++.h>
using namespace std;
void print(int cnt){
    
    if(cnt==5){
        return ;
    }
    
    print(cnt+1);
    cout<<cnt<<" ";
    
}
int main(){
    int cnt=0;

    print(cnt);
    return 0;
}