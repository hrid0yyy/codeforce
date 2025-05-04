#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = 0;
    // Iterate over possible x and y based on constraint ax + by + cz = n
    for (int x = 0; x <= n / a; ++x) {
        for (int y = 0; y <= (n - x * a) / b; ++y) {
            long long zc = n - (1LL * x * a + 1LL * y * b);
            // Check if z is a non-negative integer
            if (zc >= 0 && zc % c == 0) {
                int z = zc / c;
                ans = max(ans, x + y + z);
            }
        }
    }
    cout << ans << endl;
    return 0;
}