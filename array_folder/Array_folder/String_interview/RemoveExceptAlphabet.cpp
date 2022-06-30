#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "take12% *&u ^$#forward";
    int n = str.size();
    int count = 0;
    string s="";
    for(int i=0;i<n;i++){
        //int ch = (int)str[i];
        // if ((ch>=65&&ch<=90)||(ch>=97&&ch<=122)){
        //    s+=str[i];
        // }
        if (isalpha(str[i])){
            s+=str[i];
        }
        
    }
    cout<<s;

    return 0;
}