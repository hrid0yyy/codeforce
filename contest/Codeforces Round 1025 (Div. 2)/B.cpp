#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    return ceil(log2(n));
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        int ans = INT_MAX;
        ans = min(ans, (1+ f(n)+ f(b)));
        ans = min(ans, (1+ f(a)+ f(m)));
        ans = min(ans, (1+ f(n)+ f(m-b+1)));
        ans = min(ans, (1+ f(n-a+1)+ f(m)));
        cout << ans << "\n";
    }

    return 0;
}
