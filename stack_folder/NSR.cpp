#include <bits/stdc++.h>
using namespace std;
void NSL(int arr[], vector<int> &ans, int n)
{
    stack<int> s;
    for (int i = n-1; i >= 0 ; i--)
    {
        if (s.size() == 0)
        {
            ans.push_back(-1);
        }
        else if (s.size() > 0 && s.top() < arr[i])
        {
            ans.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>=arr[i]){
            while (s.size()>0 && s.top()>=arr[i])
            {
                s.pop();
            }
            if (s.size()==0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top());
            }
            
        }
        s.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    
}
int main()
{
    int arr[] = {4, 5, 2, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;
    NSL(arr, ans, n);
    for(auto it: ans) cout<<it<<" ";

    return 0;
}