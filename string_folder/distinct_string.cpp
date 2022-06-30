#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<string>s = {"aa","aa","bb","cc","d","aa","dd"};
    vector<string>ans;
    sort(s.begin(),s.end());// sorting take nlogn time
    int distinct = 0;
    for(int i=0;i<s.size();i++){
        if(i==0 || s[i]!=s[i-1]){ // string comparision take 0(m) time
            distinct++;
            ans.push_back(s[i]);
        }
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
    cout<<distinct<<endl;
    return 0;
    
}