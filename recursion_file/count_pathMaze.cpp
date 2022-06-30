// board game path count (down+right)
#include<bits/stdc++.h>
using namespace std;

int countPathMaze(int n, int i, int j){
    if(i==n-1 && j==n-1){
         return 1;
    }
       
    if (i>=n || j>=n)
    {
        return 0;
    }

    return countPathMaze(n,i+1,j)+countPathMaze(n,i,j+1)+countPathMaze(n,i+1,j+1);
}

int main(){
    int n=3;
    
    int count = countPathMaze(n,0,0);
    cout<<count<<endl;
    return 0;
}