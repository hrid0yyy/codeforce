#include <bits/stdc++.h>
using namespace std;
#define impossible cout << -1 << "\n"
#define mivi unordered_map<int, vector<int>>
int op;
void bottom_up(int node, mivi &edges, int value[], int parent[], bool visited[], int &op);

int main()
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
        int size = n + 1;
        int value[size];
        int cnt = 0;
        for (int i = 1; i < size; i++)
        {
            cin >> value[i];
            if (value[i] == 1)
                cnt++;
        }

        if (cnt % 2)
        {
            for (int i = 0; i < n - 1; i++)
            {
                int n1, n2;
                cin >> n1 >> n2;
            }
            impossible;
            continue;
        }
        bool visited[size] = {false};
        int parent[size];
        parent[0] = -1;
        mivi edges;
        for (int i = 0; i < n - 1; i++)
        {
            int n1, n2;
            cin >> n1 >> n2;
            edges[n1].push_back(n2);
            edges[n2].push_back(n1);
        }
        op = 0;
        bottom_up(1, edges, value, parent, visited, op);
        cout << op << "\n";
    }
    return 0;
}

void bottom_up(int node, mivi &edges, int value[], int parent[], bool visited[], int &op)
{
    visited[node] = true;
    for (auto it : edges[node])
    { 
        if (!visited[it])
        {
            parent[it] = node;
            bottom_up(it, edges, value, parent, visited, op);
        }
    }
    if(value[node] == 1 && parent[node] != -1){
        value[node] = 0;
        value[parent[node]] = 1 - value[parent[node]];
        op++;
    }
}