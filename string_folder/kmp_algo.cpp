#include<bits/stdc++.h>
using namespace std;

void computeLPS(string &ptrn, int m, int lps[]){
    int len = 0;
    int i = 1;
    lps[0] = 0;
    while (i<m){
        if (ptrn[i]==ptrn[len]){
            lps[i] = len+1;
            len++;
            i++;
        }
        else{
            if (len!=0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
            
        }
    }
}
bool kmpSearch(string &text, string &ptrn){
    int n = text.length();
    int m = ptrn.length();
    int lps[n];
    for(int i=0;i<n;i++){
        lps[i] = 0;
    }

    computeLPS(ptrn,m,lps);
    int i=0;
    int j=0;
    while (i<n){
        if (text[i]==ptrn[j]){
            i++;
            j++;
        }
        else{
            if (j!=0){
                j = lps[j-1]; 
            }
            else{
                i++;
            }
        }

        if (j==m){
            cout<<i-j<<" ";
            return true;
            j = lps[j-1];
        }
        

    }
    return false;
}
int main(){
    string T="onionionspl";
    string p = "onions";
    if (kmpSearch(T,p)){
        cout<<"pattern found"<<endl;
    }
    else{
        cout<<"pattern not found"<<endl;
    }
    return 0;
}