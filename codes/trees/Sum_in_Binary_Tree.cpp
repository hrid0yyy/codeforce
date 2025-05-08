#include<bits/stdc++.h>
using namespace std;
#define ll long long

// In Binary Tree, left child is at 2*i and right child is at 2*i + 1
// In Binary Tree, parent is at i/2
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t; 
    while (t--) {
       ll n; cin >> n;
       ll sum = 0; 
       for(ll i = n ; i >= 1; i /= 2){
            sum += i; 
       }
       cout << sum << "\n";
    }
}