#include<bits/stdc++.h>
using namespace std;
string reverse(string s){
    int i=0,j=s.size()-1;
    while(i<j){
        swap(s[i++],s[j--]);
    }
    return s;

}
int main(){
    string s;
    getline(cin,s);
    string st = "";
    string ans;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            string a = reverse(st);
            ans+=a;
            if (i!=s.length()-1){
                ans+=" ";
            }
            st="";

        }
        else{
            st+=s[i];
    
        }
    }
    cout<<st<<endl;
    ans+=reverse(st);
    cout<<ans<<endl;
    return 0;
}