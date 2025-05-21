#include <bits/stdc++.h>

using namespace std;
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    if (n % p == 0 && (n / p) * q != m){
        no;
    }
    else {
        yes;
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