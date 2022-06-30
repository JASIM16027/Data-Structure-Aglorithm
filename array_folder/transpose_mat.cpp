#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>matrix{{1,2,3},{4,5,6},{7,8,9}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>>transpose(m, vector<int>(n,0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    for(auto it: transpose){
        for(auto i: it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}