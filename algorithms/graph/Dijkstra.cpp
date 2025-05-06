#include <bits/stdc++.h>
using namespace std;
#define umap unordered_map<string, vector<pair<string, int>>>

void Dijkstra_Algorithm() {
    int vertex, edges;
    cin >> vertex >> edges;
    
    // Read the directed graph
    umap graph;
    set<string> all_nodes; // To track all nodes (source and destination)
    for (int i = 0; i < edges; i++) {
        string s, d;
        int w;
        cin >> s >> d >> w;
        graph[s].push_back({d, w}); // Directed edge: s -> d
        all_nodes.insert(s);
        all_nodes.insert(d);
    }
    
    // Get source node
    string source;
    cin >> source;
    
    // Check if source node exists
    if (all_nodes.find(source) == all_nodes.end()) {
        cout << "Source node does not exist in the graph.\n";
        return;
    }
    
    // Min-heap priority queue: stores (distance, node)
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;
    
    // Distance map: node -> distance
    unordered_map<string, int> dist;
    
    // Initialize distances to infinity for all nodes
    for (const auto& node : all_nodes) {
        dist[node] = INT_MAX;
    }
    
    // Distance to source is 0
    dist[source] = 0;
    pq.push({0, source});
    
    while (!pq.empty()) {
        // Extract node with minimum distance
        int d = pq.top().first; // Current distance
        string u = pq.top().second; // Current node
        pq.pop();
   
        // Explore neighbors (only if u has outgoing edges)
        if (graph.find(u) != graph.end()) {
            for (const auto& edge : graph[u]) {
                string v = edge.first; // Neighbor
                int weight = edge.second; // Edge weight
                
                // If a shorter path to v is found
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
                }
            }
        }
    }
    
    // Print distances
    cout << "Shortest distances from " << source << ":\n";
    for (const auto& node : all_nodes) {
        cout << "To " << node << ": ";
        if (dist[node] == INT_MAX) cout << "INF";
        else cout << dist[node];
        cout << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    Dijkstra_Algorithm();

    return 0;
}