#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> ans;

void pairSum(int arr[], int n, int k)
{
    int l = 0, r = n - 1;
    int sum = 0;
    while (l < r)
    {
        sum = arr[l] + arr[r];
        if (sum == k)
        {
            // cout<<l<<" "<<r<<endl;
            ans.push_back({l, r});
            r--;
        }
        else if (sum > k)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;
    pairSum(arr, n, k);
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}