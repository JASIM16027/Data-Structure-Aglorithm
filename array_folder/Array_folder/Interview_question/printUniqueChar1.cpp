#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abcabcabcbacbabcbacacbbca";
    //unordered_map<char, int>mp;
    //int freq[26]={0};
    vector<int>freq(26,0);
    string ans = "";
    for(int i=0;i<s.size();i++){
      if (freq[s[i]-'a']==0){
          ans+=s[i];
          freq[s[i]-'a']=1;
      }
    }
    
    cout<<ans;
    return 0;
}
// Time Complexity: O(N)

// Space Complexity: O(1)