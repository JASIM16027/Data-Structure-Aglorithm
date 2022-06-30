#include <bits/stdc++.h>
using namespace std;
void findDuplicateElement(int arr[], int n)
{
    map<int, int> RepeatElement;
    for (int i = 0; i < n; i++)
    {

        RepeatElement[arr[i]]++;
    }

    for (auto it : RepeatElement)
    {
        if (it.second > 1)
            cout << it.first << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 2, 3, 4, 5, 6, 3, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    findDuplicateElement(arr, n);
    return 0;
}