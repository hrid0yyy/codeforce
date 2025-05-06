#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        int digits = to_string(x).length();
        long long result = 0;
        long long power = 1;

        for (int i = 0; i < k; ++i)
        {
            result = result * std::pow(10, digits) + x;
        }
        if (isPrime(result))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}