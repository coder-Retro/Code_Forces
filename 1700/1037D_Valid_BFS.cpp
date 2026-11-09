#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
using namespace std;

struct Compare {
    const vector<int>& pos;
    bool operator()(int a,int b) const { return pos[a]<pos[b]; }
};

vector<vector<int>> makeGraph(int n,const vector<vector<int>>& edges,const vector<int>& seq) {
    vector<vector<int>> graph(n+1);
    for(auto& edge:edges) {
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
    }
    vector<int> pos(n+1);
    for(int i=0;i<n;i++) pos[seq[i]]=i;
    for(int i=1;i<=n;i++) sort(graph[i].begin(),graph[i].end(),Compare{pos});
    return graph;
}

bool solve(int n, const vector<vector<int>>& graph, const vector<int>& seq) {
    if(seq[0]!=1) return false;
    vector<bool> visited(n+1,false);
    queue<int> q;
    q.push(1);
    visited[1]=true;
    int seqIdx=0;
    while(!q.empty()) {
        int node=q.front();
        q.pop();
        if(seq[seqIdx++]!=node) return false;
        for(int neighbor:graph[node]) {
            if(!visited[neighbor]) {
                visited[neighbor]=true;
                q.push(neighbor);
            }
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    vector<vector<int>> edges;
    for(int i=0;i<n-1;i++) {
        int u,v;
        cin>>u>>v;
        edges.push_back({u,v});
    }
    vector<int> seq(n);
    for(int i=0;i<n;i++) cin>>seq[i];
    vector<vector<int>> graph=makeGraph(n,edges,seq);
    cout<<(solve(n,graph,seq)?"YES":"NO");
    return 0;
}