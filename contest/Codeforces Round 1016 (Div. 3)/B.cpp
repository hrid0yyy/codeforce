#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >>t;
    while(t--){
        string n;
        cin >> n;
        int count = 0;
        int i = size(n) - 1;
        while(n[i] == '0'){
            count++;
            i--;
        }
        i--;
        while(i >= 0){
            if(n[i] != '0') count++;
            i--;
        }
        cout << count << "\n";
    }
}