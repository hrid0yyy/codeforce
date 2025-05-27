#include <bits/stdc++.h>

using namespace std;
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{
    string s;
    cin >> s;
    int ind = 0;
    int len = size(s);
    stack<char> stk;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(')
        {
            stk.push(s[i]);
        }
        else
        {
            stk.pop();
        }
        if (stk.size() == 0 && i != len - 1)
        {
            yes;
            return;
        }
    }
    no;
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