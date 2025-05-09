#include <bits/stdc++.h>
using namespace std;

int xorn(int n){
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
       int a,b;
       cin >> a >> b;
       int x = xorn(a-1);
       if(x == b) cout << a << "\n";
       else if ((x != b) && ((x ^ b) != a)) cout << a + 1 << "\n";
       else cout << a + 2 << "\n";
    }
   
  
}