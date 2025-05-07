#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> s;
        int num;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){ 
                cin >> num;
                if(find(s.begin(), s.end(), num) == s.end()){
                  s.push_back(num);
                }
            }
        }
        for(int i = 1; i <= 2*n; i++){
            if(find(s.begin(), s.end(), i) == s.end()){
              s.insert(s.begin(), i);
            }
        }

        for(auto i : s){
          cout << i << " ";
        }
        cout << "\n";

    }
}