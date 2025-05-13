#include <bits/stdc++.h>
using namespace std;
#define mivi unordered_map<int, vector<int>>
#define vi vector<int>
#define mib unordered_map<int, bool>
                     
vi dfs(vi& path,mivi& graph, mib& visited, int node){
    path.push_back(node);
    visited[node] = true;
    for(auto v: graph[node]){
        if(!visited[v]){
            return dfs(path, graph, visited, v);
        }
    }
    return path;
}
void printGraph(mivi& graph){
    for(auto it: graph){
        cout << it.first << " -> ";
        for(auto v: it.second){
            cout << v << " ";
        }
        cout << "\n";
    }
}
void printPath(vi& path){
    for(auto it: path){
        cout << it << " ";
    }
    cout << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);                       
    cout.tie(0);
    int t;    
    cin >> t; 
    while (t--)
    {
        int n;
        cin >> n;
        mivi graph;
        mib visited;
        for (int i = 1; i <= n; i++)
        {
            visited[i] = false;
            if(i < n){
                graph[i].push_back(i + 1);
            }
           
            int temp;
            cin >> temp;
            if (temp == 0)
            {
                graph[i].push_back(n + 1);
            }
            else
            {
                graph[n + 1].push_back(i);
            }
        }
        visited[n+1] = false;
        bool notFound = true;
        for(int i = 1; i<=n+1;i++){
            vi path;
            mib temp = visited;
            path = dfs(path, graph, temp, i);
            if(size(path) == n+1){
                printPath(path);
                notFound = false;
                break;
            }
        }
        if(notFound){
            cout << -1 << "\n";
        }
    }
}