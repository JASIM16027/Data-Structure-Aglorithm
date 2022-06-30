#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[26] = {0}; // 0(1)
   
    for(int i=0;i<s.length();i++){ //0(N)
        arr[s[i]-'a']++;
    }

    int maxi=0, ans=0;
    for(int i=0;i<26;i++){// 0(1)
        if (maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }

    }
    cout<<(char)(ans+'a')<<" "<<maxi<<endl;
}