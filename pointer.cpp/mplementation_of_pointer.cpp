#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b ){
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main(){

    int a=3;
    int b = 4;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    
    return 0;
}