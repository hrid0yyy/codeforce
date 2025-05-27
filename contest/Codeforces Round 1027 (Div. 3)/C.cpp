#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int prev;
    cin >> prev;
    vector<int> arr;
    arr.push_back(prev);
    int x;
    for(int i = 1; i < n; i++)
    {
        cin >> x;
        if((x-prev) > 1){
            arr.push_back(x);
            prev = x;
            continue;
        }
    }
 

    cout << arr.size() << "\n";
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