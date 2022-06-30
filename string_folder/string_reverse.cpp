#include<bits/stdc++.h>
using namespace std;

void reverse(string s){
    if (s.length()==0){
        return ;
    }
    string pos = s.substr(1);
    reverse(pos);
    cout<<s[0]<<" ";
}
int main(){
    string s ="Jasim";
    reverse(s);

}