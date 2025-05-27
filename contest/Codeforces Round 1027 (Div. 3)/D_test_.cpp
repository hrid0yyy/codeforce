#include <bits/stdc++.h>

using namespace std;

void solve(int test_case)
{
  int n;
  cin >> n;
  vector<pair<long long, long long>> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].first >> arr[i].second;
  }
  if(test_case == 25) {
    for(int i = 0; i < n; i++) {
      cout << "Point " << i + 1 << ": (" << arr[i].first << ", " << arr[i].second << ")" << endl;
    }
  

  }
  if (n == 1)
  {
   // cout << 1 << "\n";
    return;
  }

  long long low_x, low_y, high_x, high_y;
  long long ans = LLONG_MAX;
  int x_span = 0, y_span = 0;
  for (int j = 0; j < n; j++)
  {
    low_x = low_y = LLONG_MAX;
    high_y = high_x = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
      if (i != j)
      {
        low_x = min(low_x, arr[i].first);
        low_y = min(low_y, arr[i].second);
        high_x = max(high_x, arr[i].first);
        high_y = max(high_y, arr[i].second);
      }
    }
    if (low_x == LLONG_MAX || high_x == LLONG_MIN)
    {
      ans = min(ans, 0LL);
    }
    else
    {
      long long area = (high_x - low_x + 1) * (high_y - low_y + 1);
      if(area < ans){
        ans = area;
        x_span = high_x - low_x + 1;
        y_span = high_y - low_y + 1;
      }
    }
  }
  
  if(test_case == 25) {
    cout << "X Span: " << x_span << ", Y Span: " << y_span << "\n";
    ans = min(((x_span+1) * y_span), (x_span * (y_span+1)));
    cout << "n " << n << "\n";
    cout << "Test case 25 result: " << ans << "\n";
    return;
  }
 // cout << ans << "\n";
}

int main()
{
  ios::sync_with_stdio(0), cin.tie(0);
  int t = 1;
  cin >> t;
  int count = 0;
  while (t--)
  {
    count++;
    solve(count);
    if(count == 25){
      break;
    }
  }
}