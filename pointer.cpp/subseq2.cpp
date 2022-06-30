#include<bits/stdc++.h>
using namespace std;

void subseq(string s, string ans, vector<string>&v){
    //base case
    if (s.length()==0){
        v.push_back(ans);
        return ;
    }
    char ch= s[0];
    int code = ch;
    string temp = s.substr(1);
    subseq(temp,ans,v);
    subseq(temp,ans+ch,v);
    subseq(temp,ans+to_string(code),v);
}
int main(){
    vector<string>res;
    subseq("AB","",res);
    for(int i=0; i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}