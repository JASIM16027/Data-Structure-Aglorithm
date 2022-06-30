#include<bits/stdc++.h>
using namespace std;

int main(){
    string txt = "aaababaabac";
    string p ="abac";
    int flag = 0;
    int n = txt.length()-p.size();
    for(int i =0; i<=n;i++){
        int j;
        for(j=0;j<p.size();j++){
            if (txt[i+j]!=p[j]){
                break;
            }
        }
        if (j==p.size()){
            flag = 1;
            cout<<"pattern is found index "<<i<<endl;
        }

    }
    if (flag==0)cout<<"pattern not found"<<endl;
    
    return 0;
}