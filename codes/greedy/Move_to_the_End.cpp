#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t; cin >> t;
    while(t--){
       long long n; cin >> n;
       vector<long long> v(n);
       vector<long long> m(n);
       long long max_v = -INFINITY;
       for(int i = 0;i<n ;++i){
        cin >> v[i];
        if(v[i] > max_v){
            m[i] = v[i];
            max_v = v[i];
        }
        else{
            m[i] = max_v;
        }
       }
       long long sum = 0;
       for(int i = n-1;i >=0 ;--i){
         cout << sum + m[i] << " ";
         sum += v[i];
       }
       

       cout << "\n";
    }
}