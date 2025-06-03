#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAX_N = 100005;

vector<int> pot(MAX_N);

void precompute_powers() {
    pot[0] = 1;
    for (int i = 1; i < MAX_N; ++i) {
        pot[i] = (2LL * pot[i - 1]) % MOD;
    }
}

void solve() {
    int n;
    cin >> n;

    vector<int> p(n), q(n);
    for (int &x : p) cin >> x;
    for (int &x : q) cin >> x;

    vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        int max_val = 0;
        for (int j = 0; j <= i; ++j) {
            int val = (pot[p[j]] + pot[q[i - j]]) % MOD;
            max_val = max(max_val, val);
        }
        result[i] = max_val;
    }

    for (int i = 0; i < n; ++i) {
        cout << result[i] << " \n"[i == n - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute_powers();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
