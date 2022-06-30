#include<bits/stdc++.h>
using namespace std;

class Student{

    void dfs(int src, vector<int>&res, vector<int>&visited,vector<int>adj[]){
        res.push_back(src);
        visited[src]=1;
        for(int i=0;i<adj[src].size();++i){
            if(!visited[i]){
                dfs(i,res,visited,adj);
            }
        }
    }

    public:

        vector<int>dfsGraph(vector<int>adj[], vector<int>&visited,int nodes){
            vector<int>res;
            for(int i=0;i<nodes;++i){
                if (visited[i]==0){
                    dfs(i,res,visited,adj);
                }
            }
            return res;

        }
            
};

int main(){

    int nodes;
    cin>>nodes;
    vector<int>visited(nodes+1,0);
    vector<int>adj[nodes];
    for(int i=0; i<nodes; ++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Student obj;
    vector<int>ans = obj.dfsGraph(adj,visited,nodes);

    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<endl;


    return 0;
}