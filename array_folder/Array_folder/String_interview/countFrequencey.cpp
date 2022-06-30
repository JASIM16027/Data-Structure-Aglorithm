#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abcsdabscc";
    int freq[26]={0};
    //for(int i=0;i<26;i++)freq[i]=0;

    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if (freq[i]!=0){
            cout<<(char)(i+'a')<<freq[i]<<" ";
        }
    }
    return 0;
}