
/*Intuition: The intuition behind this is to check for the visited element
if it is found again, this means the cycle is present in the given undirected graph.
*/
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    
    bool isCycle(vector<int> adj[], vector<int> &visited, int nodes)
    {
        for (int i = 0; i < nodes; i++)
        {
            if (visited[i] == 0)
            {
                if (checkcylce(i, adj, visited))
                {
                    return true;
                }
            }
    
        }
        return false;
    }

    bool checkcylce(int src, vector<int> adj[], vector<int> &visited)
    {
        queue<pair<int, int>> q;
        q.push({src, -1});
        visited[src] = 1;
        while (!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for (auto i:adj[node])
            {
                if (!visited[i])
                {
                    q.push({i, node});
                    visited[i] = 1;
                }
                else if (i != parent)
                {
                    return true;
                }
            }
        }
        return false;
    }

};

int main()
{

    int nodes;
    cin >> nodes;
    vector<int> visited(nodes + 1, 0);
    vector<int> adj[nodes];
    for (int i = 0; i < nodes; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Student obj;
    bool ans = obj.isCycle(adj, visited, nodes);
    if (ans==true)
    {
        cout << "yes, there is a loop here " << endl;
    }
    else
    {
        cout << "There is no loop here" << endl;
    }

    cout << endl;

    return 0;
}
/*
Time Complexity: O(N+E),  N is the time taken and E is for traveling 
through adjacent nodes overall. 

Space Complexity: O(N+E) +  O(N) + O(N) , space for adjacent list , array and queue

*/