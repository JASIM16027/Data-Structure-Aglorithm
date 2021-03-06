#include<bits/stdc++.h>
using namespace std;
int main(){
	int nodes,  edges, source;
	vector<pair<int,int> > adj[nodes+1]; 	// assuming 1 based indexing of graph
	// Constructing the graph
    cin>>nodes>>edges;
    
	for(int i=0; i<edges;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});

    }

    cin>>source;
	// Dijkstra's algorithm begins from here
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int>>> pq;
	vector<int> distTo(nodes+1,INT_MAX);//1-indexed array for calculating shortest paths
	distTo[source] = 0;
	pq.push(make_pair(0,source));	// (dist,source)
	while( !pq.empty() ){
		int dist = pq.top().first;
		int prev_node = pq.top().second;
		pq.pop();
		//vector<pair<int,int> >::iterator it;
		for( auto it:adj[prev_node]){//it = g[prev].begin() ; it != g[prev].end() ; it++
			int next_node = it.first; //it->first;
			int nextDist =it.second; // it->second;
			if( distTo[next_node] > distTo[prev_node] + nextDist){
				distTo[next_node] = distTo[prev_node] + nextDist;
				pq.push(make_pair(distTo[next_node], next_node));
			}
		}
	}
	cout << "The distances from source " << source << " are : \n";
	for(int i = 1 ; i<=nodes ; i++)	cout << distTo[i] << " ";
	cout << "\n";
	return 0;
}