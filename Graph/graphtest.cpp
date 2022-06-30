#include <bits/stdc++.h>
using namespace std;

void findMST(int nodes,vector<pair<int,int>>adj[]){
    vector<int>cost(nodes+1,INT_MAX);
    vector<int>mst(nodes+1,false);
    vector<int>parent(nodes+1,-1);
    cost[0] = 0;
    for(int i=0;i<nodes-1;i++){
        int minCost = INT_MAX,u;
        for(int j=0;j<nodes;j++){
            if (mst[j]==false && cost[j]<minCost){
                minCost = cost[j];
                u = j;
            }
        }
        mst[u]=true;

        for(auto it:adj[u]){
            if (mst[it.first]==false && it.second<cost[it.first]){
                cost[it.first] = it.second;
                parent[it.first] = u;

            }
        }
    }
    for(int i=0;i<nodes;i++){
        cout<<cost[i]<<" ";
    }

}

int main()
{
    int nodes,edges;
    cin >> nodes>>edges;
    vector<pair<int,int>> adj[nodes + 10];
    for (int i = 0; i <edges; i++)
    {
        int u, v,wt;
        cin >> u >> v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
        
    }
    findMST(nodes,adj);
   
    
    
    return 0;
}