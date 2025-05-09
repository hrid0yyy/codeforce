#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
       int n; cin >> n;
       int cnt[30] = {0};
       vector<long long> a(n);
       for(int i =0 ; i < n; i++){
           cin >> a[i];
       }
       for(int i = 0; i < n; i++){
           for(int j = 0; j < 30; j++){
               if(a[i] & (1 << j)){
                   cnt[j]++;
               }
           }
       }
       long long op = INT_MIN;
       for(int i = 0; i < n; i++){
           long long ans = 0;
           for(int j = 0; j < 30; j++){
               if(a[i] & (1 << j)){
                   ans += (1LL << j) * (n - cnt[j]);
               }
               else{
                   ans += (1LL << j) * cnt[j];
               }
           }
           op = max(op, ans);
       }
       cout << op << "\n";

    }
   
  
}