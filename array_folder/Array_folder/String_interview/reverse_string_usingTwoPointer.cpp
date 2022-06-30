#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "hello world";
    int j = str.size()-1;
    int i=0;

    while (i<j)
    {
        //swap(str[i++],str[j--]);
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    cout<<str<<endl;
    // string s = "world";
    // reverse(s.begin(), s.end());
    // cout<<s<<endl;
    return 0;
    
}