#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t; 
    while (t--) {
      int n; cin >> n;
      vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int pairs = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if((v[i] & v[j]) >= (v[i] ^ v[j])) pairs++;
            }
        }
        cout << pairs << "\n";
    }
}