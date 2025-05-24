#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
void solve(){
    int n, k, x;
    cin >> n >> k >> x;
    vi a(n);
    int a_sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        a_sum += a[i];
    }
    vi suf(n+1);
    int inv_sum = 0;
    for(int i = n - 1, j = 1 ; i >= 0 ; i--, j++){
          inv_sum += a[i];
          suf[j] = inv_sum;
    }

    if (a_sum * k < x){
        cout << 0 << '\n';
        return;
    }

    int l = 1, r = n * k;
    while(l <= r){
        int m = l + (r - l) / 2;
        int cnt_a = (n * k - m + 1) / n;
        int suff = (n * k - m + 1) % n;
        int sum = (cnt_a * a_sum) + suf[suff];
        if (sum < x){
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }

    cout << r << '\n';
}
 
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
}