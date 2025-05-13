#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int dis;

        int maxSize = max(n, m);
        int minSize = min(n, m);
        cout << min(2 * minSize, maxSize) << "\n";

        for (int i = 1; i <= maxSize && i <= n; i++)
        {
            for (int j = 1; j <= maxSize && j <= m; j++)
            {
                if (j >= i)
                    cout << j << " ";
                else
                {
                    cout << i << " ";
                }
            }
            cout << "\n";
        }
    }
}