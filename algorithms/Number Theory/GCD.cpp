#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>

ll gcd(vll& arr,int size){
    ll ans = arr[0];
    for(int i = 0; i < size ; ++i){
        ans = __gcd(ans,arr[i]);
        if (ans == 1) break;
    }
    return ans;
}

signed main(){
    int n; cin >> n;
    vll arr(n);
    for(int i = 0; i < n ; ++i){
        cin >> arr[i];
    } 
    cout << gcd(arr, n); 
}