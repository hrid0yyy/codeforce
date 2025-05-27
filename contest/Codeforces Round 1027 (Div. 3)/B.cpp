#include <bits/stdc++.h>

using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int num_ones = 0, num_zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            num_ones++;
        else
            num_zeros++;
    }

    while (k--)
    {
        if (num_ones > num_zeros)
        {
            num_ones -= 2;
        }
        else if (num_zeros > num_ones)
        {
            num_zeros -= 2;
        }
        else
        {
            num_ones -= 2;
        }
    }
    if (num_ones == num_zeros)
    {
        yes;
    }
    else
    {
        no;
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