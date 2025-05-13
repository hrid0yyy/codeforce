#include<bits/stdc++.h>
using namespace std;
signed main(){
    int v ,e;
    cin >> v >> e;
    map<int, int> edges;
    for(int i = 0; i < e; i++){
        int u , v;
        cin >> u >> v;
        edges[u]++;
        edges[v]++;
    }
    int ones = 0;
    int twos = 0;
    int all = 0;
    for(auto it : edges){
        if(it.second == 1){
            ones++;
        }
        else if(it.second == 2){
            twos++;
        }
        else if(it.second == v - 1){
            all++;
        }
    }
    if(ones == 0 && twos == v){
        cout << "ring topology\n";
    }
    else if(ones == 2 && twos == v - 2){
        cout << "bus topology\n";
    }
    else if(all == 1 && ones == v-1){
        cout << "star topology\n";
    }
    else{
        cout << "unknown topology\n";
    }

}