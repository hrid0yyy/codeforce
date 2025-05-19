#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    cout << "mul " << 999999999 << endl;
    int x;
    cin >> x;

    cout << "digit" << endl;
    cin >> x;

    if (n == 81)
    {
        cout << "!" << endl;
        cin >> x;
        return;
    }
    cout << "add " << n - 81 << endl;
    cin >> x;
    cout << "!" << endl;
    cin >> x;
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