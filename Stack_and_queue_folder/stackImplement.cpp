#include<bits/stdc++.h>
using namespace std;

class Stack{
    int top ;
    int *arr;
    int size;
    public:
        Stack(){
            top = -1;
            size = 1000;
            arr = new int[size];

        }

        void push(int x){
            top++;
            arr[top] = x;

        }
        int pop(){
            int x = arr[top];
            top--;
            return x;
        }
        int Top(){
            return arr[top];
        }
        int Size(){
            return top+1;
        }

};
int main(){
    Stack st ;
    st.push(10);
    st.push(20);
    st.push(10);
    st.push(20);
    cout<<st.Size()<<endl;
  

}