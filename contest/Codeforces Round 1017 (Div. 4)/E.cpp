#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll num;
            cin >> num;
            v.push_back(num);
        }
        ll ans = LLONG_MIN;
        for(int i =0 ; i < n; i++){
            ll count = 0;
            for(int j = 0; j < n; j++){
                if (v[i] == v[j]) continue;
                count += v[i] ^ v[j];
            }
            ans = max(ans, count);
        }
        cout << ans << "\n";
    }
}
