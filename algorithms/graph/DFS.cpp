#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define pb push_back

void addEdge(vvi &adj, int s, int t)
{
    adj[s].pb(t);
    adj[t].pb(s);
}

// Recursive function for DFS traversal
void dfsRec(vvi &adj, vb &visited, int s, vi &res)
{
    // Mark the current vertex as visited
    visited[s] = true;
    res.pb(s);
    // Recursively visit all adjacent vertices that are not visited yet
    for (int i : adj[s])
        if (visited[i] == false)
            dfsRec(adj, visited, i, res);
}

// Main DFS function to perform DFS for the entire graph
vi DFS(vvi &adj)
{
    vb visited(adj.size(), false);
    vi res;
    // Loop through all vertices to handle disconnected graph
    for (int i = 0; i < adj.size(); i++)
    {
        if (visited[i] == false)
        {
            // If vertex i has not been visited,
            // perform DFS from it
            dfsRec(adj, visited, i, res);
        }
    }

    return res;
}

int main()
{
    int V = 6;
    // Create an adjacency list for the graph
    vvi adj(V);

    // Define the edges of the graph
    vvi edges = {{1, 2}, {2, 0}, {0, 3}, {4, 5}};

    // Populate the adjacency list with edges
    for (auto &e : edges)
        addEdge(adj, e[0], e[1]);
    vi res = DFS(adj);

    for (auto it : res)
        cout << it << " ";
    return 0;
}