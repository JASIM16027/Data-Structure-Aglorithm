
#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
        bool dfsCycle(int src, vector<int>adj[], int visited[], int dfsvis[]){
                visited[src] = 1;
                dfsvis[src]  = 1;
                for(auto i: adj[src]){
                    if(!visited[i]){
                        if (dfsCycle(i,adj,visited, dfsvis)){
                            return true;
                        }
                    }
                    else if(dfsvis[i])
                    {
                        return true;
                    }    
                }
                dfsvis[src]=0;
                return false;
            }

        public:
            bool isCyclic(vector<int>adj[], int nodes){
                int visited[nodes], dfsvis[nodes];
                memset(visited,0, sizeof visited);
                memset(dfsvis, 0, sizeof dfsvis);
                

                for(int i=0;i<nodes;i++){
                    if(!visited[i]){
                        if (dfsCycle(i,adj,visited,dfsvis)){
                            return true;
                        }
                    }
                }
                return false;
            }

            
};
int  main(){

    int nodes,edges;
    cin>>nodes>>edges;
    vector<int>adj[edges+1];
    for(int i=0; i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
        
    }
    Solution obj;
    bool ans = obj.isCyclic(adj,nodes);
    if (ans){
        cout<<"yes, there is a cycle"<<endl;
    }
    else {
        cout<<"No, there is no Cycle here"<<endl;
    }
    return 0;
}
/*
Time Complexity: O(V + E), since in its whole,
 it is a DFS implementation, V – vertices; E – edges;

Space Complexity: O(V), because, apart from the graph, 
we have 2 arrays of size V, to store the required information
*/