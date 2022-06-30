#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &mp)
{
    cout << mp.size() << endl;
    // 0(1) for access time complexity
    for (auto &it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    auto it = mp.find(5);//0(1)
    if(it==mp.end()){
        cout<<"No value"<<endl;
    }
    else{
        cout<<it->second<<endl;
    }

    auto i = mp.find(1); //0(1)
    if (i!=mp.end()){
        mp.erase(i);//0(1)
    }

    for(auto &it: mp)cout<<it.first<<" "<<it.second<<endl;

}

int main(){
    // unordered_map is used inbuilt hash table
    // time complexity --> 0(n) for insertion and 0(n) for access;
    unordered_map<int, string>mp;
    mp[1] = "abc"; //0(1) for insertion time complexity
    mp[6] = "def";
    mp[5] = "ghi";
    mp.insert({4, "mnop"});//0(1)
    print(mp);

    return 0;
}