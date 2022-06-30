#include<bits/stdc++.h>
using namespace std;

void BFS(int src, vector<int>&visited, vector<int>adj[], vector<int>&ans){
    queue<int>q;
    q.push(src);
    visited[src] = 1;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(auto i: adj[node]){
            if(visited[i]==0){
                visited[i]=1;
                q.push(i);
            }

        }
    }

}
int main(){
    int nodes;

    cin>>nodes;
    vector<int>adj[nodes];
    vector<int>visited(nodes,0);
    vector<int>ans;

    for(int i=0; i<nodes;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<nodes; ++i){
        for(auto j: adj[i]){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;

    }
    
    for(auto it:visited){
        cout<<it<<" ";
    }
    for(int i=0; i<nodes;++i){
        if(visited[i]==0){
            BFS(i,visited,adj,ans);
            
        }
    }

    for(auto i: ans){
        cout<<i<<" ";
    }


    return 0;
}
/*
Time Complexity : O(N+E)
N = Nodes , E = travelling through adjacent nodes
Space Complexity : O(N+E) + O(N) + O(N)
Space for adjacency list, visited array, queue data structure
*/