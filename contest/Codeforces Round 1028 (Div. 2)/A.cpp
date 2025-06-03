#include <bits/stdc++.h>

using namespace std;

#define flower cout << "Flower\n"
#define gellyfish cout << "Gellyfish\n"

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int min_g = min(a, c);
    int min_f = min(b, d);
    if(min_f > min_g)
    {
        flower;
    }
    else if(min_g > min_f)
    {
       gellyfish;
    }
    else
    {
        gellyfish;
    }
   
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