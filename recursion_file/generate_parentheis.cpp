#include<bits/stdc++.h>
using namespace std;

vector<string>ans;

void valid_parenthesis(string &s, int open, int close){
    // base case
    if(open==0 && close==0){
        ans.push_back(s);
        return ;
    }
    // adding opening '('
    if(open>0){
        s.push_back('(');
        valid_parenthesis(s,open-1,close);
        s.pop_back();
    }
    // adding closing ')'
    
    if (close>0){
        if(open<close){
            s.push_back(')');
            valid_parenthesis(s,open,close-1);
            s.pop_back();
        }

    }


}
int main(){

    int n;
    string s = "";
    cin>>n;
    
    int open=n;
    int close =n;
    valid_parenthesis(s, open,close);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}