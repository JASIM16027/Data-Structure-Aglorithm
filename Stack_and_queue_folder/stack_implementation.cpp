#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int top;
    int size;
    int *arr;

public:
    Stack()
    {
        top = -1;
        size = 1000;
        arr = new int[size];
    }

    void push(int x)
    {
        top += 1;
        arr[top] = x;
    }

    int pop()
    {
        int x = arr[top];
        top -= 1;
        return x;
    }

    int Top()
    {
        return arr[top];
    }

    int Size()
    {
        return top + 1;
    }
};
int main()
{
    Stack s;
    s.push(6);
    s.push(7);
    cout << s.Top() << endl;
    return 0;
}

/*
Time Complexity: O(N)

Space Complexity: O(N)
*/