#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        void dfs(int src, vector<int>adj[], int visited[],stack<int>&s){
            visited[src] = 1;
            for(auto i: adj[src]){
                if(visited[i]==0){
                    dfs(i,adj,visited, s);
                }
            }  
            s.push(src);

        }

    public:
        vector<int>toposort(int nodes, vector<int>adj[]){
            vector<int>res;
            int visited[nodes];
            stack<int>s;
            memset(visited, 0, sizeof visited);
            for(int i=0; i<nodes; i++){
                if(visited[i]==0){
                    dfs(i,adj, visited, s);
                }
            }

            while (!s.empty()){
                int node = s.top();
                s.pop();
                res.push_back(node);
                
                
            }

            return res;
        }

        

};

int main(){
    int nodes;
    cin>>nodes;

    vector<int>adj[nodes+10];
    for(int i = 0; i<nodes; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    Solution obj;
    vector<int>ans = obj.toposort(nodes,adj);
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
}

/*
Time Complexity: O(N+E) 

N = Number of node , E = Number of Edges

Space Complexity: O(N) + O(N)

Visited Array and Stack data structure. Both will be using O(N).

Auxiliary Space Complexity:  O(N)

Recursion call of DFS

*/