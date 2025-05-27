#include <bits/stdc++.h>

using namespace std;
#define ll long long
using pll = pair<ll, ll>; 

void solve()
{
  int n;
  cin >> n;
  vector<pll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].first >> arr[i].second;
  }

  if (n == 1)
  {
    cout << 1 << "\n";
    return;
  }

  vector<ll> prefix_min_x(n), prefix_max_x(n), prefix_min_y(n), prefix_max_y(n);
  vector<ll> suffix_min_x(n), suffix_max_x(n), suffix_min_y(n), suffix_max_y(n);

  prefix_min_x[0] = arr[0].first;
  prefix_max_x[0] = arr[0].first;
  prefix_min_y[0] = arr[0].second;
  prefix_max_y[0] = arr[0].second;

  for (int i = 1; i < n; i++)
  {
    prefix_min_x[i] = min(prefix_min_x[i - 1], arr[i].first);
    prefix_max_x[i] = max(prefix_max_x[i - 1], arr[i].first);
    prefix_min_y[i] = min(prefix_min_y[i - 1], arr[i].second);
    prefix_max_y[i] = max(prefix_max_y[i - 1], arr[i].second);
  }

  suffix_min_x[n - 1] = arr[n - 1].first;
  suffix_max_x[n - 1] = arr[n - 1].first;
  suffix_min_y[n - 1] = arr[n - 1].second;
  suffix_max_y[n - 1] = arr[n - 1].second;

  for (int i = n - 2; i >= 0; i--)
  {
    suffix_min_x[i] = min(suffix_min_x[i + 1], arr[i].first);
    suffix_max_x[i] = max(suffix_max_x[i + 1], arr[i].first);
    suffix_min_y[i] = min(suffix_min_y[i + 1], arr[i].second);
    suffix_max_y[i] = max(suffix_max_y[i + 1], arr[i].second);
  }

  ll ans = LLONG_MAX;
  ll x_span = 0, y_span = 0; 

  for (int j = 0; j < n; j++)
  {
    ll low_x = LLONG_MAX, high_x = LLONG_MIN;
    ll low_y = LLONG_MAX, high_y = LLONG_MIN;

    if (j > 0)
    {
      low_x = min(low_x, prefix_min_x[j - 1]);
      high_x = max(high_x, prefix_max_x[j - 1]);
      low_y = min(low_y, prefix_min_y[j - 1]);
      high_y = max(high_y, prefix_max_y[j - 1]);
    }
    if (j < n - 1)
    {
      low_x = min(low_x, suffix_min_x[j + 1]);
      high_x = max(high_x, suffix_max_x[j + 1]);
      low_y = min(low_y, suffix_min_y[j + 1]);
      high_y = max(high_y, suffix_max_y[j + 1]);
    }

    ll area = (high_x - low_x + 1) * (high_y - low_y + 1);
    if (area < ans)
    {
      ans = area;
      x_span = high_x - low_x + 1; 
      y_span = high_y - low_y + 1; 
    }
  }


  if (ans < n)
  {
    ans = min(((x_span + 1) * y_span), (x_span * (y_span + 1)));
  }

  cout << ans << "\n";
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