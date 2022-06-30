#include <bits/stdc++.h>
using namespace std;
class Slotution
{
    bool isValid(int r, int c, int row, int col, vector<vector<int>> &grid)
    {
        if (r >= 0 && c >= 0 && c < col && r < row && grid[r][c] == 0)
        {
            return true;
        }
        return false;
    }

public:
    int shortestPathBinaryMatrix(vector<vector<int>> &grid)
    {
        int col = grid[0].size();
        int row = grid.size();
        // corner case 1
        if (grid[0][0] == 1)
            return -1;
        vector<vector<int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
        queue<pair<int, int>> q;
        int cnt=0;
        q.push({0, 0});
        // after inserting into queue mark it as a block. 1 mean block 
        grid[0][0]=1;
        while (q.empty() == false)
        {
            int size = q.size();
            cnt++;
            for (int i = 0; i < size; i++)
            {
                pair<int, int> node = q.front();
                q.pop();
                if(node.first==row-1 && node.second==col-1) return cnt;
                for (int j = 0; j < dirs.size(); j++)
                {
                    int new_row = node.first + dirs[j][0];
                    int new_col = node.second + dirs[j][1];

                    if (isValid(new_row, new_col, row, col, grid))
                    {
                        q.push({new_row,new_col});
                        grid[new_row][new_col] = 1;
                    }
                }
            }
        }
        return -1;
    }
};
int main()
{
    vector<vector<int>> grid = {{0,0,0}, {1,1,0},{1,1,0}};
    Slotution obj;
    int cnt  = obj.shortestPathBinaryMatrix(grid);
    cout<<cnt<<endl;
    return 0;
}