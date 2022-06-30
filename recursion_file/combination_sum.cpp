#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
void combination_sum(int index, int arr[], int target, int n, vector<int> &temp)
{
    if (index == n)
    {
        if (target == 0)
        {
            ans.push_back(temp);
        }
        return;
    }
    
    if (target >=arr[index])
    {

        temp.push_back(arr[index]);
        combination_sum(index, arr, target - arr[index], n, temp);
        temp.pop_back();
    }
    combination_sum(index + 1, arr, target, n, temp);
}
int main()
{
    int target = 7;
    int arr[] = {2, 3, 6, 7};
    vector<int> temp;
    int size = sizeof(arr) / sizeof(arr[0]);
    combination_sum(0, arr, target, size, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}