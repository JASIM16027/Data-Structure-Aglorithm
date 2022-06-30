#include <bits/stdc++.h>
using namespace std;

/*
kahn's algo---> indegree technique
topological sort is applicable for directed acyclic graph(DAG)
Topological sort: The linear ordering of nodes/vertices such that
 if there exists an edge between 2 nodes u,v  then ‘u’ appears before ‘v’.

Note: This can be possible only for DAG ( Directed acyclic graph) because
in an undirected graph we can’t decide which node will come first
because there will be no direction, and if there is a cycle topological order
 will not be possible

*/
class Solution
{
private:
    bool findTopoSort(vector<int> adj[], vector<int> &indegree, int nodes)
    {
        queue<int> q;
        for (int i = 0; i < nodes; i++)
        {
            for (auto it : adj[i])
            {
                indegree[it]++;
            }
        }

        for (int i = 0; i < nodes; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        int cnt = 0;

        while (!q.empty())
        {
            int node = q.front();
            cnt++;
            q.pop();
            
            for (auto it : adj[node])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                {
                    q.push(it);
                }
            }
        }

        if (nodes==cnt){
            return false;
        }
        else{
            return true;
        }
        
        
    }

public:
    bool toposort(int nodes, vector<int> adj[])
    {
        vector<int> indegree(nodes, 0);
        

       if (findTopoSort(adj, indegree, nodes)){
           return true;
       }
       else{
           return false;
       }
           
    }
};

int main()
{

    int nodes;
    cin >> nodes;
    vector<int> adj[nodes + 1];
    for (int i = 0; i < nodes; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    Solution obj;
    bool ans = obj.toposort(nodes, adj);
    if (ans)
    {
        cout << "yes, there is a cycle in this graph" << endl;
    }
    else
    {
        cout << "There is no cycle in this graph" << endl;
    }

    return 0;
}

/*

Time Complexity: O(N+E)

Space complexity: O(N)+O(N) // queue and indegree data structure

*/