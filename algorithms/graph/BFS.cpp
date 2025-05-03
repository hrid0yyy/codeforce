#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define qi queue<int>

// BFS from given source s
void bfs(vvi &adj, int s,
         vb &visited, vi &res)
{

    // Create a queue for BFS
    qi q;

    // Mark source node as visited and enqueue it
    visited[s] = true;
    q.push(s);

    // Iterate over the queue
    while (!q.empty())
    {

        // Dequeue a vertex and store it
        int curr = q.front();
        q.pop();
        res.push_back(curr);

        // Get all adjacent vertices of the dequeued
        // vertex curr If an adjacent has not been
        // visited, mark it visited and enqueue it
        for (int x : adj[curr])
        {
            if (!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

// Perform BFS for the entire graph which maybe
// disconnected
vi bfsDisconnected(vvi &adj)
{
    int V = adj.size();

    // create an array to store the traversal
    vi res;

    // Initially mark all the vertices as not visited
    vb visited(V, false);

    // perform BFS for each node
    for (int i = 0; i < adj.size(); ++i)
    {
        if (!visited[i])
        {
            bfs(adj, i, visited, res);
        }
    }

    return res;
}

int main()
{

    vvi adj = {{1, 2}, {0}, {0}, {4}, {3, 5}, {4}};
    vi ans = bfsDisconnected(adj);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}