#include<bits/stdc++.h>
using namespace std;
int parent[100000];
int ranked[10000];

void makeset(int n){
    for(int i=0;i<n;i++){
        parent[i]=i;
        ranked[i] = 0;
    }
}

int findParent(int node){
    if (parent[node]==node){
        return node;
    }

    return parent[node] = findParent(parent[node]);

}

void Union(int u,int v){
    int u = findParent(u);
    int v = findParent(v);
    if (ranked[u]<ranked[v]){
        parent[u] = v;
    }
    else if(ranked[v]<ranked[u]){
        parent[v] = u;
    }
    else{
        parent[v] = u;
        ranked[u]++;
    }

}
int main(){
    int n;
    cin>>n;
    makeset(n);
    int m;
    cin>>m;
    while(m--){
        int u,v;
        cin>>u>>v;
        Union(u,v);

    }
    findParent(20);
    if (findParent(2)!=findParent(3)){
        cout<<"components are different"<<endl;
    }
    else{
        cout<<"components are not different"<<endl;
    }
    
    return 0;
}