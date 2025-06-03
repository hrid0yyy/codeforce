#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b){
    if (b == 0){    return a;}
    return gcd(b, a % b);

}

void solve()
{
    int n; cin >> n;
    int a[n];
    sort(a, a + n);
    cin >> a[0];
    int g = gcd(a[0], a[0]);
    for (int i = 1; i < n; i++){
        cin >> a[i];
        g = gcd(g, a[i]);
    }
    int ans = INT_MAX;
    int f = 1;
    for(int i = n-1; i >= 0; i--){
        if(a[i] == g){
           ans = 0;
           f = 0;
           break;
        }
        int temp = a[i];
        int count = 0;
        for(int j =n-1 ; j >= 0; j--){
            if(temp == g){
                ans = min(ans, count);
                break;
            }
            count++;
            if(i != j){
                temp = gcd(temp, a[j]);
            }
            
        }
    }
    for(int i = 0; i < n;i++){
        if(a[i] != g){
            ans++;
        }
    }
  
    cout << ans - f << "\n";
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