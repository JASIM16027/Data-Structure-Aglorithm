#include<bits/stdc++.h>
using namespace std;

int countPath(int src, int dest){
    if (src==dest){
        return 1;
    }
    if (src>dest){
        return 0;
    }
    int count = 0;

    for(int i=1;i<=6;i++){
        count+= countPath(src+i,dest);

    }
    return count;

}
int main(){

    int src,dest;
    cin>>src>>dest;
    
    int cnt = countPath(src,dest);
    cout<<cnt<<endl;
    return 0;
}