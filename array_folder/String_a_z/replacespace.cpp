#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string temp= "";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if (s[i]==' '){
            temp.append("@40");
        }
        else{
            temp+=s[i];
        }
    }
    cout<<temp<<endl;
    return 0;
}