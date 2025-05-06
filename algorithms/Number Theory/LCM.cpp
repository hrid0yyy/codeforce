#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>

ll lcm(vll& arr, int size) {
    ll ans = arr[0];
    for (int i = 1; i < size; ++i) {
        ans = std::lcm(ans, arr[i]); 
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vll arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << lcm(arr, n) << '\n';
    return 0;
}