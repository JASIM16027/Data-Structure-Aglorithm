#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void findMST(vector<pair<int,int>>adj[], int nodes){
        int mst[nodes+1], parent[nodes+1], cost[nodes+1];
        for(int i=0;i<nodes;i++) {
            cost[i]=INT_MAX;
            parent[i]=-1;
            mst[i] = false;
            }
        
        cost[0]=0;
        
        for(int i=0; i<nodes-1; i++){ // Nodes ---> 1 --->nodes-1  edge for MST
            int min_val = INT_MAX, u;
    
            for(int j=0;j<nodes; j++){
                if(mst[j]==false && cost[j]<min_val){
                    min_val = cost[j];
                    u = j;
                }
               
            }
            mst[u] = true;
            for(auto it: adj[u]){
                if (mst[it.first]==false && it.second<cost[it.first]){
                    parent[it.first] = u;
                    cost[it.first] = it.second;
            }

            }

        }
        for(int i=1; i<nodes;i++)cout<<cost[i]<<" ";
    }
        
};
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    vector<pair<int, int>>adj[nodes+10];
    for(int i=0;i<edges;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back(make_pair(v,wt));
        adj[v].push_back(make_pair(u,wt));
    }
    Solution obj;
    obj.findMST(adj,nodes);

    return 0;
}