#include<bits/stdc++.h>
using namespace std;

bool bfsBirpartite(vector<int>adj[],int src,int color[]){
    queue<int>q;
    q.push(src);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        color[src]=1;

        for(auto it: adj[node]){
            if(color[it]==-1){
                color[it] = 1-color[node];
                q.push(it);
            }
            else if(color[it]==color[node]){
                return false;
            }
        }

    }
    return true;

}
bool isBipartite(vector<int>adj[], int n){
    int color[n];
    memset(color,-1,sizeof color);
    for(int i = 0;i<n;i++){
        if (color[i]==-1){
            if (!bfsBirpartite(adj,i,color)){
                return false; 
            }
        }
    }
    return true;
}
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    vector<int>adj[nodes];
    for(int i=0; i<nodes;++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if(isBipartite(adj,nodes)){
       cout<<"YES"<<endl; 
    }
    else{
        cout<<"No"<<endl;
    }
}