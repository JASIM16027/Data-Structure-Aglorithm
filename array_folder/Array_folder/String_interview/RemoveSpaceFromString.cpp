#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[] = "I am looking for a decent job";
    int count=0;
    for(int i=0;s[i];i++){
        if (s[i]!=' '){
            s[count++]=s[i];

        }
    }
    s[count]='\0';
    cout<<s<<endl;
    return 0;
}