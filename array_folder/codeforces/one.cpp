#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    while(n>0){
        string X;
       
        getline(cin,X);
        if (X=="X++"){
            x+=1;
            n--;

        }
        else if (X=="X--"){
            x-=1;
            n--;
        }
    }
    cout<<x;
    return 0;
}