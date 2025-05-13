#include <bits/stdc++.h>
using namespace std;
#define spi set<pair<int, int>>
void summary(spi (&marathon)[6]);
void solve();
void bruteforce();

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

void summary(spi (&marathon)[6])
{
    for (int i = 1; i <= 5; i++)
    {
        cout << "Marathon " << i << ": ";
        for (auto it : marathon[i])
        {
            cout << it.second << " ";
        }
        cout << "\n";
    }
}

void solve()
{
    int n;
    cin >> n;
    spi marathon[6];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int temp;
            cin >> temp;
            marathon[j].insert({temp, i});
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        auto it = marathon[i].begin();
        for (int j = 0; j < n; j++)
        {
        }
    }
}

void bruteforce()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ranks[n][5];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> ranks[i][j];
            }
        }
        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }
        int superiority[n] = {0};
        int superior = -1;
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int ip = 0, jp = 0;
                for (int k = 0; k < 5; ++k)
                {
                    if (ranks[i][k] < ranks[j][k])
                    {
                        ip++;
                    }
                    else if (ranks[i][k] > ranks[j][k])
                    {
                        jp++;
                    }
                }
                if (ip >= 3)
                    superiority[i]++;
                else if (jp >= 3)
                    superiority[j]++;
                if (superiority[i] == n - 1)
                {
                    superior = i + 1;
                    break;
                }
                else if (superiority[j] == n - 1)
                {
                    superior = j + 1;
                    break;
                }
            };
            if (superior != -1)
                break;
        }
        cout << superior << "\n";
    }
}
