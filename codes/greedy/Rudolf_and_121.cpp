#include <bits/stdc++.h>

using namespace std;
#define yes cout << "YES\n";
#define no cout << "NO\n";

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 2; ++i)
    {
        int op = arr[i];

        arr[i] = arr[i] - 1 * op;
        arr[i + 1] = arr[i + 1] - 2 * op;
        arr[i + 2] = arr[i + 2] - 1 * op;
        if (arr[i + 1] < 0 || arr[i + 2] < 0)
        {
            no;
            return;
        }
    }
    if (arr[n - 2] != 0 || arr[n - 1] != 0)
    {
        no;
    }
    else
    {
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