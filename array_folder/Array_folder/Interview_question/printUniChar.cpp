#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abcabcabcbacbabcbacacbbca";
    string ans = "";
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if (s[i]==s[j]){
                s[j]='$';
                
            }
        }
       if (s[i]!='$'){
           ans+=s[i];
       }

    }
    
    cout<<ans;
    return 0;
}
// Time Complexity: O(N^2)

// Space Complexity: O(1)