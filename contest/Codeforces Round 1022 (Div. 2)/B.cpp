#include <bits/stdc++.h>

using namespace std;

void solve()
{
   int n, x;
   cin >> n >> x;
   int bits = __popcount(x);
   if(n<=bits) cout << x << "\n";
   else if((n-bits)%2==0) cout << n+x-bits << "\n";
   else {
       if(x>1) cout << n+x-bits+1 << "\n";
       else if(x==1){
           cout << n+3 << "\n";
       }
       else{
          if(n == 1) cout << -1 << "\n";
          else cout << n+3 << "\n";
       }
   }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}