#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i, string &s){
    if(i>=s.size()/2){
        return true;
    }
    if (s[i]!=s[s.size()-i-1]){
        return false;
    }
    return checkPalindrome(i+1,s);


}
int main(){

    string s;
    cin>>s;
    
    if (!checkPalindrome(0,s)){
        cout<<"Not palindrome"<<endl;
    }
    else{
        cout<<"Palindrome"<<endl;
    }
    return 0;
}