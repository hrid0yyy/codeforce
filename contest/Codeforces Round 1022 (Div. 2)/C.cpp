#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>
#define pb push_back
#define sz size()
void solve()
{
    int n;
    cin >> n;
    vi a;
    a.pb(-1);
    int prev = -1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (prev != x)
           a.pb(x);
        prev = x;
    }
    a.pb(-1);
    int ans = 0;
    for (int i = 1; i < a.sz - 1; i++)
        if (a[i - 1] < a[i] && a[i] > a[i + 1])
            ans++;
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}