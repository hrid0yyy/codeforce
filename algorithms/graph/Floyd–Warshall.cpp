#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int vertex, edges; cin >> vertex >>  edges;
    int dist[vertex][vertex];
    for(int i = 0; i < vertex ; ++i){
        for(int j = 0; j < vertex ; ++j){
             if (i == j) dist[i][j] = 0;
             else dist[i][j] = 1e9;
        }
    }
    for(int i = 0 ; i < edges ; ++i){
        int s, d, w;
        cin >> s >> d >> w;
        dist[s][d] = w;
    }

    for(int k = 0; k < vertex ; ++k){
        for(int i = 0; i < vertex ; ++i){
            for(int j = 0; j < vertex ; ++j){
                if(dist[i][j] > dist[i][k] + dist[k][j]) dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    for(int i = 0; i < vertex ; ++i){
        for(int j = 0; j < vertex ; ++j){
             cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
    

}
