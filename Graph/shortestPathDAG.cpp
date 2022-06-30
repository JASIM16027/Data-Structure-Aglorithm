#include <bits/stdc++.h>
using namespace std;

class Solution
{
    // topological sort for DAG
    void toposort(int src, vector<pair<int, int>> adj[], vector<int> &visited,
                  stack<int> &st)
    {
        visited[src] = 1;
        for (auto i : adj[src])
        {
            if (!visited[i.first])
            {
                toposort(i.first, adj, visited, st);
            }
        }
        st.push(src);
    }

public:
    void findtoposort(int src, vector<pair<int, int>> adj[], int nodes,
                      vector<int> &visited)
    {
        stack<int> st;
        for (int i = 0; i < nodes; i++)
        {
            if (visited[i] == 0)
            {
                toposort(i, adj, visited, st);
            }
        }

        int dist[nodes + 1];
        for (int i = 0; i < nodes; i++)
            dist[i] = INT_MAX;
            
        dist[src] = 0;
        while (!st.empty())
        {
            int top = st.top();
            st.pop();

            if (dist[top] != INT_MAX)
            {
                for (auto it : adj[top])
                {
                    if ((dist[top] + it.second) < dist[it.first])
                    {
                        dist[it.first] = dist[top] + it.second;
                    }
                }
            }
        }

        for (int i = 0; i < nodes; i++)
            if (dist[i]!=INT_MAX)
                cout << dist[i] << " ";
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj[n + 10];
    for (int i = 0; i < e; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
    }

    // int visited[n];
    // memset(visited,0,sizeof visited);
    vector<int> visited(n + 1, 0);
    Solution obj;
    obj.findtoposort(0, adj, n, visited);
    /*
    for(int i=0; i<n;i++){
        if (dist[i]!=INT_MAX)
            cout<<dist[i]<<" ";
    }
    cout<<endl;
    */

    return 0;
}