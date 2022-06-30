#include<bits/stdc++.h>
using namespace std;
int main(){
    string subs = "ud";
    string s = "jasim uddin ud";
    int t = s.length();
    int sl = subs.length();
    for(int i=0;i<t-sl+1;i++){
        if(s.substr(i,sl)==subs){
            cout<<i<<" ";
        }
    
    }
    return 0;
}
//TC - 0(sl*t)