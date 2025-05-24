#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = INT_MAX;
    if (k != 4)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % k == 0)
            {
                ans = min(ans, 0);
                break;
            }
            else if (v[i] < k)
            {
                ans = min(ans, k - v[i]);
            }
            else
            {
                ans = min(ans, k - (v[i] % k));
            }
        }
    }
    else
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 4 == 0)
            {
                ans = min(ans, 0);
                break;
            }
            if (v[i] % 2 == 0)
            {
                cnt++;
            }
            if (v[i] == 3 || v[i] == 7)
            {
                ans = min(ans, 1);
            }
        }
        if (cnt == 0)
            ans = min(ans, 2);
        else if (cnt == 1)
            ans = min(ans, 1);
        else if (cnt >= 2)
            ans = min(ans, 0);
    }
    cout << ans << "\n";
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