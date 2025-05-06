#include <bits/stdc++.h>
using namespace std;
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
        vector<vector<int>> grid(n, vector<int>(n, -1));
        string e, p;
        cin >> e >> p;
        // enemy pawn denoted by 2 , player pawn denoted by 1
        for (int i = 0; i < n; ++i)
        {
            if (e[i] = '1')
            {
                cout << "d";
                grid[n - 1][i] = 1;
            }
               
            if (p[i] = '1')
                {
                    grid[0][i] = 2;
                }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; ++j)
            {
               cout << grid[i][j] << " ";
            }
            cout << "\n";
        }
    }
}