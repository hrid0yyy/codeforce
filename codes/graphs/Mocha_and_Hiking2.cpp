#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

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
        vi v;

        for (int i = 1; i <= n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        if (v[n - 1] == 0)
        {
            for (int i = 1; i <= n + 1; i++)
            {
                cout << i << " ";
            }
        }
        else if (v[0] == 1)
        {
            cout << n + 1 << " ";
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
        else {
            int prev = 0;
            for(int i = 1; i <= n; i++){
              if(prev == 0 && v[i-1] == 1){
                   for(int j = 1; j < i; j++){
                     cout << j << " ";
                   }
                   cout << n + 1 << " ";
                   for(int j = i; j <= n; j++){
                     cout << j << " ";
                   }
                    break;
              }
              prev = v[i-1];
            }
        }
        
        cout << "\n";
    }

 
}