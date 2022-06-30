#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dfs(int r, int c, vector<vector<int>>&grid,int n){
     
        if(r<n && c<n && grid[r][c]==0){
            grid[r][c]=1;
            //cout<<grid[r][c]<<" ";
            return 1+ dfs(r+1,c,grid,n)+dfs(r-1,c,grid,n)+dfs(r+1,c+1,grid,n)+dfs(r+1,c-1,grid,n)
                + dfs(r-1,c-1,grid,n)+dfs(r-1,c+1,grid,n)+dfs(r,c+1,grid,n)+dfs(r,c-1,grid,n);
            grid[r][c]=0;
            
        }
    
        
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int res=0;
        int n = grid[0].size();
        cout<<n<<endl;

        dfs(0,0,grid,n);
        cout<<res<<endl;
        return res;
        
    }
};

int main(){
    vector<vector<int>>grid={{0,1},{1,0}};
    Solution obj;
    int res = obj.shortestPathBinaryMatrix(grid);
    cout<<res<<endl;
    return 0;
}