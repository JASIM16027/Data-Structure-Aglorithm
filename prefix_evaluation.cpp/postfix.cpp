#include <iostream>
#include <math.h>
#include <stack>
#include <vector>
using namespace std;

void postfix_evaluation(string &s, stack<int> &st)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;

            case '-':
                st.push(op1 - op2);
                break;

            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            }
        }
    }
}
int main()
{
    string s;
    cin >> s;
    stack<int> st;
    postfix_evaluation(s, st);
    cout << st.top() << endl;
    return 0;
}