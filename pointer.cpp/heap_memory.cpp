#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = new int();// used to allocate memory in heap.
    // heap is a free store
    *p = 10;
    cout<<*p<<endl;
    delete(p); // delete operator is used to deallocate memory fro heap
    cout<<*p<<endl;
    p = new int[4];
    delete[]p;
    p = NULL;

    return 0;

}