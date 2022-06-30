#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "hello";
    stack<char>s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }

    int i=0;

    while(!s.empty()){
        int element = s.top();
        s.pop();
        str[i++] = element;
    }
    cout<<str;

    return 0;
}