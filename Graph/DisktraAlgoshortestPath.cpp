#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nodes, edges ;
    cin>>nodes>>edges;
    vector<pair<int, int>> adj[nodes + 10]; // assuming 1 based indexing of graph
    // Constructing the graph
    for(int i=0; i<edges;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    int src;
    cin>>src;
    priority_queue<pair<int,int>,vector<pair<int, int>>,greater<pair<int,int>>>pq;
    

    int dist[nodes+1];
    for(int i=0;i<nodes; i++)dist[i]=INT_MAX;
    dist[src] = 0;
    pq.push(make_pair(0,src));
    while (pq.empty()==false)
    {
        int distance = pq.top().first;
        int prev_node = pq.top().second;
        pq.pop();

        for(auto it: adj[prev_node]){
            if(dist[it.first]>dist[prev_node]+it.second){
                dist[it.first] = dist[prev_node]+it.second;
                pq.push(make_pair(dist[it.first],it.first));
            }

        }
        
    }

    for(int i=1;i<= nodes;i++){
        cout<<dist[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
/*
Time Complexity: O((N+E)*logN). Going through N nodes and E edges and
log N for priority queue

Space Complexity: O(N). Distance array and priority queue

*/