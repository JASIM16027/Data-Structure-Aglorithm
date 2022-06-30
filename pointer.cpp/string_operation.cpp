#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    /*
    string str;
    cin>>str;

    for(int i =0; i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;

    string str1(5,'n');
    cout<<str1<<endl;
*/
/*
    string str2;
    //getline(cin,str2);
    cin>>str2;

    cout<<str2<<endl;
*/
/*
string s1 = "fam";
string s2 = "ily";
//s1 = s1+s2;
//s1.append(s2);
string s= s1+s2;
//cout<<s<<endl;
s.clear();
cout<<s<<endl;
*/
/*
string s1 = "abcd";
string s2 = "abcd";
string s;

//cout<<s1.compare(s2)<<endl;

if (!s1.compare(s2))
    cout<<"String are equal"<<endl;
else
    cout<<"string are not equal"<<endl;

if (s1.empty()){
    cout<<"string is empty"<<endl;
}
else{
    cout<<"string is not empty"<<endl;
}
string str = "ja uddin";
//str.erase(6,6);
//cout<<str<<endl;
cout<<str.find("uddin")<<endl;
str.insert(2,"sim");
cout<<str<<endl;
string str1 = str.substr(0,5);
cout<<str1<<endl;
string ss = "124";
int a = stoi(ss);
cout<<a+2<<endl;
string p;
p = to_string(a);
cout<<p+'2'<<endl;
*/

string s = "jasim";
sort(s.begin(),s.end());
cout<<s<<endl;
return 0;
}