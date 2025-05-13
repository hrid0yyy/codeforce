#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define umci unordered_map<char, int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        umci m;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
            if (m[s[i]] > 1)
            {
                flag = false;
                break;
            }
            else
                continue;
        }
        flag ? yes : no;
    }
    return 0;
}