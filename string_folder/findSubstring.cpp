#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcdefg";
    string subs = "efg";
    int cnt =0;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<subs.size();j++){
            if (s[i]==subs[j]){
                cnt++;
                continue;
                
            }
            
        }
        cnt = 0;
    }
    if (cnt==subs.size()-1){
        cout<<"yes"<<endl;

    }
    else{
        cout<<"No"<< endl;
    }
    return 0;
}