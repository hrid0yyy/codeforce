
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int k = 63 - __builtin_clzll(n-1);

        for (int i = (1 << k) - 1; i >= 0; i--)
        {
            cout << i << ' ';
        }
        for (int i = (1 << k); i < n; i++)
        {
            cout << i << ' ';
        }
        cout << '\n';
    }
}