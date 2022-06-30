#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "this is an amazing program";
    string str = "";

    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            st.push(str);
            str = "";
        }
        else
        {
            str += s[i];
        }
    }
    st.push(str);
    
    string ans = "";
    while (st.size() != 1)
    {
        ans += st.top() + " ";
        st.pop();
    }
    ans += st.top();
    cout << ans;

    return 0;
}