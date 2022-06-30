#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abcbcbsghhh";
    int check[26]={0};
    string ans = "";
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            if (s[i]==s[j] && check[s[j]-'a']==0){
                ans+=s[i];
                check[s[j]-'a'] = 1;
            }
        }
    }
    cout<<ans;
    return 0;
}