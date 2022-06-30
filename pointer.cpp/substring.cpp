#include<bits/stdc++.h>
using namespace std;

void subsequence(string s, string ans, vector<string>&v){
    if (s.length()==0)
        {
            v.push_back(ans);
            return;
        }
    char ch = s[0];

    string pos = s.substr(1);
    subsequence(pos,ans,v);
    subsequence(pos,ans+ch,v);
}
int main(){
    vector<string>v;
    
    subsequence("ABC","",v);
    sort(v.begin(),v.end());
    for(int i =0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}