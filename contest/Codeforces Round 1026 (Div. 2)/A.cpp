#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if((arr[0] + arr[n-1])  % 2 == 0){
        cout << 0 << "\n";
        return;
    }
    int first_odd = -1, first_even = -1;
    for(int i = 0; i < n; i++){
        if(first_odd == -1){
            if(arr[i] % 2 == 1) first_odd = i;
        }
        if(first_even == -1){
            if(arr[i] % 2 == 0) first_even = i;
        }
        if(first_even != -1 && first_odd != -1) break;
    }
    int last_odd = -1, last_even = -1;
    for(int i = n-1; i >= 0; i--){
        if(last_odd == -1){
            if(arr[i] % 2 == 1) last_odd = i;
        }
        if(last_even == -1){
            if(arr[i] % 2 == 0) last_even = i;
        }
        if(last_even != -1 && last_odd != -1) break;
    }

    cout << min((first_even+(n-1-last_even)), (first_odd+(n-1-last_odd))) << "\n";
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