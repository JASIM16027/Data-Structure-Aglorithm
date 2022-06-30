#include<bits/stdc++.h>
using namespace std;

void BFS(int src, vector<int>adj[], int dist[]){
    queue<int>q;
    q.push(src);
    dist[src] = 0;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto i: adj[node]){
            if(dist[node]+1<dist[i]){
                dist[i]=dist[node]+1;
                q.push(i);
            }

        }
    }

}

int main(){
    int nodes, edges;

    cin>>nodes>>edges;
    vector<int>adj[nodes+10];
    int dist[nodes+10];
    for(int i=0;i<nodes;i++)dist[i]=INT_MAX;

    for(int i=0; i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    BFS(0,adj,dist);

    for(int i=0; i<nodes;i++){
        cout<<dist[i]<<" ";
    }
    cout<<endl;

    return 0;
}
/*
Time Complexity : O(N+E)
N = Nodes , E = travelling through adjacent nodes
Space Complexity :  O(N) for queue + O(N) for distance array
*/