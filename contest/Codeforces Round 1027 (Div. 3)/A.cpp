#include <bits/stdc++.h>

using namespace std;

#define cant cout << "-1\n"

void solve()
{
    string s;
    cin >> s;
    int val = stoi(s); 
    int root = sqrt(val);
    for(int i = 0 ; i <= 45; i++){
        int a = i;
        int b = root - a;
       if((a*a + 2*a*b + b*b) == val){
          cout << min(a, b) << " " << max(a, b) << "\n";
          return;
       } 
    }
    cant;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
