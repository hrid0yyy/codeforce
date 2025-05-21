#include <bits/stdc++.h>

using namespace std;
#define yes cout << "YES\n";
#define no cout << "NO\n";

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        vector<pair<int, int>> pairs;
        for (int i = 0; i < n; ++i)
            pairs.push_back({abs(a[i]), i});

        sort(pairs.begin(), pairs.end());

        vector<int> ans(n, 0);
        for (int i = 0; i <= n / 2; ++i)
            ans[pairs[i].second] = 1;

        if (ans[0])
            {
                yes;
            }
        else
            {
                no;
            }
    }

    return 0;
}
