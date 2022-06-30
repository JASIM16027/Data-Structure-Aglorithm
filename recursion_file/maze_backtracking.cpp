#include <bits/stdc++.h>
using namespace std;

class Solution
{

    void solve(int i, int j, string path, vector<vector<int>> &board,
               vector<vector<int>> &visited, int n, vector<string> &ans)
    {

        // base case
        if (i == n - 1 && j == n - 1)
        {
            ans.push_back(path);
            return;
        }

        // move downward direction

        if (i + 1 < n && !visited[i + 1][j] && board[i + 1][j] == 1)
        {
            visited[i + 1][j] = 1;
            solve(i + 1, j, path + "D", board, visited, n, ans);
            visited[i + 1][j] = 0;
        }
        // move left direction
        if (j - 1 >= 0 && !visited[i][j - 1] && board[i][j - 1] == 1)
        {
            visited[i][j - 1] = 1;
            solve(i, j - 1, path + "L", board, visited, n, ans);
            visited[i][j - 1] = 0;
        }

        // move right direction

        if (j + 1 < n && !visited[i][j + 1] && board[i][j + 1] == 1)
        {
            visited[i][j + 1] = 1;
            solve(i, j + 1, path + "R", board, visited, n, ans);
            visited[i][j + 1] = 0;
        }

        // move upward direction

        if (i - 1 >= 0 && !visited[i - 1][j] && board[i - 1][j] == 1)
        {
            visited[i - 1][j] = 1;
            solve(i - 1, j, path + "U", board, visited, n, ans);
            visited[i - 1][j] = 0;
        }
    }

public:
    vector<string> findPath(vector<vector<int>> &board, int n)
    {
        vector<string> ans;
        vector<vector<int>> visited(n, vector<int>(n, 0));
        // first (0,0) have to be true

        string path = "";
        if (board[0][0] == 1)
            solve(0, 0, path, board, visited, n, ans);
        return ans;
    }
};

int main()
{
    int n = 4;
    // cin>>n;
    /*
    1 0 0 0
    1 1 0 1
    1 1 0 1
    0 1 1 1

    */
    vector<vector<int>> m(n);
    //= {{1, 0, 0, 0},{1, 1, 0, 1},{1, 1, 0, 0},{0, 1, 1, 1}};

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int value;
            cin >> value;
            m[i].push_back(value);
        }
    }
    Solution obj;
    vector<string> result = obj.findPath(m, n);

    if (result.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// Time Complexity: O(4^(m*n)), because on every cell
// we need to try 4 different directions.

// Space Complexity:  O(m*n) ,Maximum Depth of the recursion tree(auxiliary space).