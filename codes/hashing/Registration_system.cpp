#include <bits/stdc++.h>
using namespace std;
#define msi map<string, int>
int main()
{
    cin.tie(0);
    int t;
    cin >> t;
    msi m;
    while (t--)
    {
        string s;
        cin >> s;
        if (m[s] == 0)
        {
            cout << "OK" << "\n";
        }
        else
        {

            cout << s << m[s] << "\n";
        }
        m[s]++;
    }
}