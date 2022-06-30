#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    bool isSafe(int col,int row,vector<string>&chess_Board, int n){
        int duprow = row;
        int dupcol = col;
    
        while (col>=0 && row>=0){
            if (chess_Board[row][col]=='Q')
                return false;
            col--;
            row--;
        }
        col = dupcol;
        row = duprow;
        while (col>=0)
        {
            if (chess_Board[row][col]=='Q') 
                return false;
            col--;
        }

        while (col>=0 && row<n)
        {
            if (chess_Board[row][col]=='Q')
                return false;
            row++;
            col--;
        }
        return true;
        
        
    }
    void findQplace(int col, vector<vector<string>>&ans,vector<string>&chess_Board,
     int n){
         if (col==n){
             ans.push_back(chess_Board);
             return ;
         }
         for(int row=0;row<n; row++){
             if (isSafe(col,row,chess_Board,n)){
                 chess_Board[row][col]='Q';
                 findQplace(col+1, ans, chess_Board,n);
                 chess_Board[row][col] = '.';
             }
         }

    }
public:
    vector<vector<string>> NQueen(int n)
    {
        vector<vector<string>>ans;
        vector<string> chess_Board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            chess_Board[i] = s;
        }

        findQplace(0,ans, chess_Board,n);
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    //vector<vector<string>> ans;
    
    Solution obj;
    vector<vector<string>> res= obj.NQueen(n);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[0].size();j++){
            cout<< res[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
