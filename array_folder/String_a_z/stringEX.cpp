#include<bits/stdc++.h>
using namespace std;
void reverseName(char name[], int length){
    // int i=0,j = length-1;
    // while(i<j){
    //     //swap(name[i++],name[j--]);
    //     char ch = name[i];
    //     name[i] = name[j];
    //     name[j] = ch;
    //     i++;
    //     j--;


    // }

    for(int i=0;i<length/2;i++){
        swap(name[i],name[length-i-1]);
    }

}
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cin>>name;
    
    //name[2] = '\0';
    cout<<"Enter your name : ";
    cout<<name<<endl;

    cout<<"Length of your name : "<<getLength(name)<<endl;
    reverseName(name,getLength(name));
    cout<<name<<endl;
    return 0;
}