#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        
        vector<vector<pair<int,int>>> adj(V);
        
        for(auto &i : edges){
            int u = i[0];
            int v = i[1];
            int w = i[2];
            
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        vector<bool> visited(V, false);
        
        pq.push({0,0});
        int res = 0;
        
        while(!pq.empty()){
            
            auto p = pq.top();
            pq.pop();
            
            int wt = p.first;
            int u = p.second;
            
            if(visited[u]) continue;
            
            visited[u] = true;
            res += wt;
            
            for(auto &i : adj[u]){
                int v = i.first;
                int w = i.second;
                
                if(!visited[v]){
                    pq.push({w, v});
                }
            }
        }
        
        return res;
    }
};