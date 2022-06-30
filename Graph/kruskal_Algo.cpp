#include<bits/stdc++.h>
using namespace std;

struct node{
    int u;
    int v;
    int wt;
    node(int first,int second,int weight){
        u = first;
        v = second;
        wt = weight;
    }
};

bool comp(node a, node b){
    return a.wt<b.wt;
}

int findParent(int u,vector<int>&parent){
    if (parent[u]==u)
        return u;
    return parent[u] = findParent(parent[u],parent); // path compression has occurred
}

void Union(int u,int v, vector<int>&parent, vector<int>&rank){ // connect edge
    u = findParent(u,parent);
    v = findParent(v, parent);
    if (rank[u]<rank[v]){
        parent[u] = v;
    }
    else if (rank[v]<rank[u]){
        parent[v] = u;
    }
    else{
        parent[v] = u;
        rank[u]++;
    }
}


int main(){
    int n=5,m=6;
    vector<node>edges;

    edges.push_back(node(0,1,2));
	edges.push_back(node(0,3,6));
	edges.push_back(node(1,0,2));
	edges.push_back(node(1,2,3));
	edges.push_back(node(1,3,8));
	edges.push_back(node(1,4,5));
	edges.push_back(node(2,1,3));
	edges.push_back(node(2,4,7));
	edges.push_back(node(3,0,6));
	edges.push_back(node(3,1,8));
	edges.push_back(node(4,1,5));
	edges.push_back(node(4,2,7));
    sort(edges.begin(),edges.end(), comp);

    vector<int>parent(n);
    for(int i=0;i<n;i++){
        parent[i] = i;
    }
    vector<int>rank(n,0);
    vector<pair<int,int>>mst;
    int cost=0;
    for(auto it: edges){
        if (findParent(it.u,parent)!=findParent(it.v,parent)){ // disjoin set
            cost+=it.wt;
            mst.push_back({it.u,it.v});
            cout<<"add"<<endl;
            Union(it.u,it.v,parent,rank);
        }
    }
    cout << cost << endl;
	for(auto it : mst) cout << it.first << " - " << it.second << endl; 

    return 0;
}
// Time Complexity: O(ElogE)+O(E*4*alpha), 
// ElogE for sorting and E*4*alpha for findParent operation ‘E’ times

// Space Complexity: O(N). Parent array+Rank Array