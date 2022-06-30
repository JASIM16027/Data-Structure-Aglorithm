#include<bits/stdc++.h>
using namespace std;

string arr[] = {"","","abc","def","ghi", "jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s, string ans, vector<string>&v){
    //base case
    if(s.length()==0){
        v.push_back(ans);
        return ;
    }

    char ch = s[0];
    string code = arr[ch-'0']; 
    // ch-'0' = 50-48=2 arr[2] = "abc" arr[3] = "def"
    string temp = s.substr(1);
    cout<<temp<<endl;
    for(int i=0;i<code.length();i++)
    {
        cout<<code[i]<<" ";
        keypad(temp,ans+code[i],v);
    }
}
int main(){
    vector<string>v;
    string s;
    cin>>s;

    keypad(s,"",v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" " ;
    }
    cout<<endl;
    return 0;
}