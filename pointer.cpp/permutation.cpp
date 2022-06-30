#include<bits/stdc++.h>
using namespace std;

void permutation(string s, string ans, vector<string>&res){
    //base case
    if (s.length()==0){
        res.push_back(ans);
        return ;
    }

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        string temp = s.substr(0,i)+s.substr(i+1);
        permutation(temp, ans+ch,res);
    }

}
int main(){
    vector<string>res;
    string s;
    cin>>s;
    permutation(s,"",res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}