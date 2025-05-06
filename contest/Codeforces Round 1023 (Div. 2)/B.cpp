#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    ll sum = 0, mx = 0, mn = 1e9 + 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    ll d = mx - mn;
    if (d <= k) {
        cout << (sum % 2 ? "Tom" : "Jerry") << '\n';
        return;
    }
    bool has_safe_move = false;
    vector<int> max_indices;
    for (int i = 0; i < n; i++) {
        if (a[i] == mx) {
            max_indices.push_back(i);
        }
    }
    for (int i : max_indices) {
        ll new_val = a[i] - 1;
        ll new_max = new_val;
        ll new_min = mn;

        for (int j = 0; j < n; j++) {
            if (j != i) {
                new_max = max(new_max, a[j]);
            }
        }
        if (new_val < mn) {
            new_min = new_val;
            for (int j = 0; j < n; j++) {
                if (j != i && a[j] < mn) {
                    new_min = min(new_min, a[j]);
                }
            }
        }
        if (new_max - new_min <= k) {
            has_safe_move = true;
            break;
        }
    }
    if (has_safe_move) {
        cout << (sum % 2 ? "Tom" : "Jerry") << '\n';
    } else {
        cout << "Jerry" << '\n';
    }
    }
    return 0;
}