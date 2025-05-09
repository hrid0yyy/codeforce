#include <bits/stdc++.h>
using namespace std;
unordered_map<char, vector<char>> graph;
map<char, bool> visited;
vector<char> sortedArr;
void dfs(char node, unordered_map<char, vector<char>>& graph);
void topologicalSort(unordered_map<char, vector<char>>& graph);

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int e; cin >> e;
    // Input "A B" means A -> B
    for (int i = 0; i < e; i++)
    {
        char a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        visited[a] = false;
    } 

    topologicalSort(graph);
  
}



void dfs(char node, unordered_map<char, vector<char>>& graph)
{
    visited[node] = true;
    for (auto i : graph[node])
    {
        if (!visited[i])
        {
            dfs(i, graph);
        }
    }
    sortedArr.insert(sortedArr.begin(), node);
}

void topologicalSort(unordered_map<char, vector<char>>& graph)
{
    for (auto i : graph)
    {
        if (!visited[i.first])
        {
            dfs(i.first, graph);
        }
    }
    for (auto i : sortedArr)
    {
        cout << i << " ";
    }
}


