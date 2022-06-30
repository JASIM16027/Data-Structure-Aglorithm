#include<bits/stdc++.h>
using namespace std;

int minimumPathSum(int n, vector<vector<int>>&triangle){
    vector<int>front(n,0),cur(n,0);
    for(int j = 0;j<n;j++) front[j] = triangle[n-1][j];
    for(int i=n-2;i>=0;i--){
        for(int j=i;j>=0;j--){
            int down = triangle[i][j]+front[j];
            int diagonal = triangle[i][j]+front[j+1];

            cur[j] = min(down, diagonal);
        }
        front = cur;
    }
    return front[0];
}
int main(){
    vector<vector<int>>triangle{{1},{2,3},{4,5,6},{7,8,9,10}};
    int n = triangle.size();
    cout<<minimumPathSum(n,triangle)<<endl;
    return 0;
}