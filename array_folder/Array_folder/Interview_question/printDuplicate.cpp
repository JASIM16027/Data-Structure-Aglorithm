#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abcabcabcbacbabcbacacbbca";
    
    vector<int>freq(26,0);
    
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++; 
    }
    for(int i=0;i<26;i++){
        if (freq[i]>1){
            cout<<(char)(i+'a')<<"---> "<<freq[i]<<endl;
        }
    }
   
    return 0;
}

// Time Complexity: O(n), we traverse each character in the string, 
// and accessing the array takes only constant time (n is the length of the string).

// Space Complexity: O(1), since the string has only characters from ‘a’ to ‘z’, 
// the maximum size of the array is 26.