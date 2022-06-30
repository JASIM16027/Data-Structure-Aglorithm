#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &mp)
{
    cout << mp.size() << endl;
    // 0(log(n)) for access time complexity
    for (auto &it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

}

void print_using_iterator(map<int, string> &mp)
{
    cout<<mp.size()<<endl;
    map<int, string>::iterator it;
    for (it = mp.begin(); it != mp.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    cout<<endl;
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
}

int main()
{
    map<int, string> mp;
    mp[1] = "abc"; //0(log(n)) for insertion time complexity
    mp[6] = "def";
    mp[5] = "ghi";
    mp.insert({4, "mnop"});

    auto it = mp.find(4); // 0(log(n)) for find (key, value) time pair complexity
    if(it==mp.end()){
        cout<<"key not found"<<endl;
    }
    else{
        cout<<it->first<<" "<<it->second<<endl;
    }
    auto i = mp.find(7);
    if (i!=mp.end()){
        mp.erase(i); // 0(log(n)) for erase key from map
    }
    

    print(mp);
    cout<<endl;
    print_using_iterator(mp);

    return 0;
}