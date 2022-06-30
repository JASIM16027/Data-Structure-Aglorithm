#include<iostream>
#include<vector>
#include<math.h>
#include<stack>
using namespace std;

void prefix_evaluation(string &s,stack<int>&st){
    
    for(int i=s.size()-1;i>=0;--i){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(operand1+operand2);
                break;
            case '-':
                st.push(operand1-operand2);
                break;
            case '*':
                st.push(operand1*operand2);
                break;
            case '/':
                st.push(operand1/operand2);
                break;
            case '^':
                st.push(pow(operand1,operand2));
                break;
            }
        }
    }
}
int main(){
    string s;
    cin>>s;
    stack<int>st;
    prefix_evaluation(s,st);
    cout<<st.top()<<endl;
    return 0;
}