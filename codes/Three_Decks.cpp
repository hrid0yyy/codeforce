#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int limit = c - b;
        c -= limit;
        if( b - a > limit) {
            cout << "NO" << "\n";
            continue;
        }
        int a_taken = b - a;
        limit -= a_taken;
        a = b;
        if(limit % 3 == 0){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
}