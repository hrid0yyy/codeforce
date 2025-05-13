#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
signed main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);                       
    cout.tie(0);
    int t;    
    cin >> t; 
    while (t--)
    {
     int n;
     cin >> n;
     vector<int> a(n);
     for (int i = 0; i < n; i++)
     {
         cin >> a[i];
     }
     int smaller = n/2;
     int larger = n - smaller;
     cout << smaller << endl;
    }
}