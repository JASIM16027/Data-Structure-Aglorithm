
/*Intuition: The intuition behind this is to check for the visited element
if it is found again, this means the cycle is present in the given undirected graph.

If the previously visited node and it is not equal to 
the parent we can say there is cycle again and will return true
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
                if (checkcylce(i, -1, adj, visited))
                {
                    return true;
                }
            }
    
        }
        return false;
    }

    bool checkcylce(int src, int parent, vector<int> adj[], vector<int> &visited)
    {
    
        visited[src] = 1;
        for(auto it: adj[src]){
            if (!visited[it]){
                visited[it] = 1;
                if (checkcylce(it,src,adj,visited))return true;
            }
            else if(parent!=it){
                return true;
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
Time Complexity: O(N)

Space Complexity: O(N)
*/